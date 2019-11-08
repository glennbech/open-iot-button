# open-iot-button

# get started on your Mac with PlatformIO

PlatformIO is awesome. The Arduono IDE is based on Eclipse. Get Platform IO right away if you plan on doing any work with arduino and don't want your eyes and fingers to bleed. 

```
brew install platformio
```

# make an Alias

```
alias pio2=platformio
```

# Initialize the project 
  
platformio init --board esp32doit-devkit-v1
 
# Common tasks
  
Is the baord connected? 
```
platformio device list 
```

Upload and to the bord and run the sketch 

```
platformio run -t upload
```






