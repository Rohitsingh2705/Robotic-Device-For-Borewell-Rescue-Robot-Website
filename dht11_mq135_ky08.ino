#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Fonts/FreeSans9pt7b.h>
#include <Fonts/FreeMonoOblique9pt7b.h>
#include <DHT.h>
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define sensor  A0 
#define DHTPIN 2          // Digital pin 2
#define DHTTYPE DHT11     // DHT 11

int gasLevel = 0;         //int variable for gas level
String quality =""; 
DHT dht(DHTPIN, DHTTYPE);



void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
  Serial.println("Failed to read from DHT sensor!");
    return;
  }
  display.setTextColor(WHITE);
  display.setTextSize(1);
  display.setFont();
  display.setCursor(0, 43);
  display.println("Temperature:");
  display.setCursor(80, 43);
  display.println(t);
  display.setCursor(114, 43);
  display.println("C");
  display.setCursor(0, 56);
  display.println("Humidity :");
  display.setCursor(80, 56);
  display.println(h);
  display.setCursor(114, 56);
  display.println("%");
}

void air_sensor()
{
  gasLevel = analogRead(sensor);

  if(gasLevel<350){
    quality = "  GOOD!";
  }
  else if (gasLevel >350 && gasLevel<375){
    quality = "  Poor!";
  }
  else if (gasLevel >375 && gasLevel<400){
    quality = "Very bad!";
  }
    
    else{
    quality = " Toxic";   
}
  
  display.setTextColor(WHITE);
  display.setTextSize(1);  
  display.setCursor(1,5);
  display.setFont();
  display.println("Air Quality:");
  display.setTextSize(1);
  display.setCursor(20,23);
  display.setFont(&FreeMonoOblique9pt7b);
  display.println(quality); 
}
//------------------------------------------------------
int soundSensor=4;
int LED=6;
boolean LEDStatus=false;
//------------------------------------------------------
void setup() {
  Serial.begin(9600);
  pinMode(sensor,INPUT);
  dht.begin();
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3c)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
}
  display.clearDisplay();
  display.setTextColor(WHITE);
  
  display.setTextSize(2);
  display.setCursor(50, 0);
  display.println("Air");
  display.setTextSize(1);
  display.setCursor(23, 20);
  display.println("Qulaity monitor");
  display.display();
  delay(1200);
  display.clearDisplay();
  
  display.setTextSize(2);
  display.setCursor(20, 20);
  display.println("BY RUDRAKSHA");
  display.display();
  delay(1000);
  display.clearDisplay();    

   pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);
}

void loop() {
display.clearDisplay();
air_sensor();
sendSensor();
display.display();  

int SensorData=digitalRead(soundSensor); 
  if(SensorData==1){

    if(LEDStatus==false){
        LEDStatus=true;
        digitalWrite(LED,HIGH);
    }
    else{
        LEDStatus=false;
        digitalWrite(LED,LOW);
    }
  }
}
