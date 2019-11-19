#include <AWS_IOT.h>
#include <WiFi.h>
#include <SimpleDHT.h>

#define DHTPIN 22     // what digital pin we're connected to

SimpleDHT22 dht(DHTPIN);
AWS_IOT hornbill;   // AWS_IOT instance

char WIFI_SSID[]="AndroidAP9E75";
char WIFI_PASSWORD[]="11223355";
char HOST_ADDRESS[]="a2fkst7eheq7fw-ats.iot.eu-west-2.amazonaws.com";
char CLIENT_ID[]= "arn:aws:iot:eu-west-2:024906192910:thing/dht_humid_office";
char TOPIC_NAME[]= "$aws/things/dht_humid_office/shadow/update";
char SUB_TOPIC_NAME[]= "$aws/things/dht_humid_office/shadow/update/accepted";


int status = WL_IDLE_STATUS;
int tick=0,msgCount=0,msgReceived = 0;
char payload[512];
char rcvdPayload[512];

void setup() {

    Serial.begin(9600);
    delay(2000);

    while (status != WL_CONNECTED)
    {
        Serial.print("Attempting to connect to SSID: ");
        Serial.println(WIFI_SSID);
        // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
        status = WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

        // wait 5 seconds for connection:
        delay(5000);
    }

    Serial.println("Connected to wifi");



    if(hornbill.connect(HOST_ADDRESS,CLIENT_ID)== 0) // Connect to AWS using Host Address and Cliend ID
    {
        Serial.println("Connected to AWS");
        delay(1000);
    }
    else
    {
        Serial.println("AWS connection failed, Check the HOST Address");
        while(1);
    }
    delay(2000);
    if(0==hornbill.subscribe(SUB_TOPIC_NAME,mySubCallBackHandler))
    {
        Serial.println("Subscribe Successfull");
    }
    else
    {
        Serial.println("Subscribe Failed, Check the Thing Name and Certificates");
        while(1);
    }
}

void mySubCallBackHandler (char *topicName, int payloadLen, char *payLoad)
{
  Serial.println("rejected!");
  Serial.println(payLoad);
}

void loop() {
    float t = 0;
    float h = 0;
    int err = SimpleDHTErrSuccess;
    if ((err = dht.read2(&t, &h, NULL)) != SimpleDHTErrSuccess) {
      Serial.print("Read DHT22 failed, err="); Serial.println(err);delay(2000);
      return;
    }

    sprintf(payload,"{\"state\":{\"reported\":{\"h\": %f, \"t\": %f}}}",h,t); // Create the payload for publishing
    if(hornbill.publish(TOPIC_NAME,payload) == 0)   // Publish the message(Temp and humidity)
    {
        Serial.print("Publish Message:");
        Serial.println(payload);
    }
    else
    {
        Serial.println("Publish failed");
    }
    vTaskDelay(5000 / portTICK_RATE_MS);
    }
