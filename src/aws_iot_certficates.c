/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char certificate_pem_crt[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWTCCAkGgAwIBAgIUaMsRDEIbYvhKdRkJwZRkzLBF1wswDQYJKoZIhvcNAQEL\n\
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g\n\
SW5jLiBMPVNsdffsdfsdfds fA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0\n\
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBANnRWDoj2AM77lf0RPJH\n\
j11Z5BxCkDjlW8MOFFe/IYTvyvNYP0PMizeDaq5a5iASo5Ore5j8teoTO5OrZ2oO\n\
fPoDmfnxkHKyUgtJlaqNsKhqwFYBczspH/V5hMXUN0cqt4eOiSPtuuRbgAtwnWkH\n\
u6cBDqEbpFaRvfhFA7qGnp/Xhx/ecJ8kZct6GLFb/vYHuLPIYrgOudsSjtw9pQ0i\n\
V9QonLrRnVqAHaTdemx4cDD8jIklqlb5+XwarRUZHukQvmvT7iEmUDo8bbob7yPt\n\
OzrqlfkeQDjA7TWLV0AOO8SoBIMWQTurdc8/DUxqX7LZW0fixQRTOnGpTP3jq6nI\n\
bfsCAwEAAaNgMF4wHwYDVR0jBBgwFoAUdlLinivC6aHqa8svgzPf6spXIdAwHQYD\n\
VR0OBBYEFFix+199MjF4AA3PGkgmR9txsapMMAwGA1UdEwEB/wQCMAAwDgYDVR0P\n\
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQAMO/3Xam32o73VddDZXhHlAbi7\n\
itwb2naRMLqcZ06AydkAec5JFoVyxMkHVm6RhCFxZ9hm9GL5QNCbPUQ2DjfUNOQn\n\
GGkfqGaoHi7osVP//qqaMFxQyF6Do+PsL8K9vKo+0GD1oLPlexsJQro4M0o5jHCB\n\
u3Tc+S1PFEUaNqCNXBeijwqiGy7bEBcAKNyFXlv+v7ZzTbpUArLQfPDEjF964oAZ\n\
tKPzfVWr3WuA3Gi6A5EPb+xdWh/rUQB5M9yINM1RKhG3fWa6+mA6FBUEgP3EOjPm\n\
1Wexv2YxbuTBoIiuh7uS1WT86ghxXDLwnpYkxGZ6jo5D43p/UStrmvkOmda0\n\
-----END CERTIFICATE-----\n"};

const char private_pem_key[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEogIBAAKCAQEA2dFYOiPYAzvuV/RE8kePXVnkHEKQOOVbww4UV78hhO/K81g/\n\
Q8yLN4NqrlrmIBKjk6t7mPy16hM7k6tnag58+gOZ+fGQcrJSC0mVqo2wqGrAVgFz\n\
Oykf9XmExdQ3Ryq3h46JI+265FuAC3CdaQe7pwEOoRukVpG9+EUDuoaen9eHH95w\n\
nyRly3oYsVv+9ge4s8hiuA652xKO3D2lDSJX1CicutGdWoAdpN16bHhwMPyMiSWq\n\
Vvn5fBqtFRke6RC+a9PuISZQOjxtuhvvI+07OuqV+R5AOMDtNYtXQA47xKgEgxZB\n\
O6t1zz8NTGpfstlbR+LFBFM6calM/eOrqcht+wIDAQABAoIBAEAaGuPpXo39GjSq\n\
P4wpwShQ5w/mCvmjjjDGOPhl2GB+DXU2GFBEpwfsVf3/5E+2DIvN4K7yWDsN8++O\n\
dv3AS8lsO+lRzRfkIL8PpcsurbmyyO3GuXnErZIZdBigTrBUAvUS3otDUEgaIYG8\n\
X6bkTrZkWkDRmLidZZHmBaXkLlSNlvVpk8EYxvLY2aFSjzLQhabGX19po94L0RbV\n\
uN6K/Kwcr8n/ra5sdfsdfsdfsdfGbNR0jeY99vQQcuQbc1VvabBOx5jHCw1hcHGpQs8S\n\
5c36fEkGwgJFxOXOMsdfsdfsdfsdfsdf8poAQEMMQNgoIMCgYBIfi5gN/K/8eOHJ313m8y+\n\
9gslm6OfxNFC25W+VTZxxwvOzfxEd6gTxtWwfCK0PqGFtFx8sobEWmdg1p1t6gDm\n\
t5Xe1Ktop5l71h873/FmoTbBWE797QWlARY6dVGSU8RZXN1t3Mhs+xJqrrJtCY5Y\n\
qvkZX4OhE/wrsNhgM6P9wQKBgBMLoeztXLGP96yMwDxVJxOZP0H6NF7igcpP38AJ\n\
2uQlSEY1uVnPLU1O9T0d8WhMu9g7ID12iHEb7tYBcBtcn03n4Ks0vFf3ii6zsBMB\n\
HyZ9g9IDyh8ycGudpzQMGNCQ+vB+BzqVHD6ecMBqSgBVfFxeBU1BMClEtPhhPsx9\n\
njxBAoGANoEd+k5jBOSB0SJv9TgM8jP6Itakq929U8MrUTBRwnayOjKBix/7IQ0J\n\
RkiLnMEEgeL9brSGSgOdilxJPMraWPdIA3IMxmaELAbaLCQues+4mbbuDSJkgnpu\n\
uAm8vGlvgUOgJSgM9d1Xg4lR+OrtIMayxYraUyDe63wqJAMMwX4=\n\
-----END RSA PRIVATE KEY-----\n"};

const char aws_root_ca_pem[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQsdfsdfsdfsdfsdfgk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCsdfsdfsdfsdfNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

#ifdef __cplusplus
}
#endif
