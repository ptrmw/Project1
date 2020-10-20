#include "Wire.h"
#include <LiquidCrystal.h>
#include "DHT.h"
#define DHTPIN 12
#define DHTTYPE DHT11
LiquidCrystal lcd(9, 8, 7, 6, 5, 4);

DHT dht(DHTPIN, DHTTYPE);

int mark = 0;

void setup() {
  
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(3,OUTPUT);
  digitalWrite(A2,HIGH);
  digitalWrite(A3,HIGH);
  dht.begin();
  digitalWrite(3,1);
  delay(600);
  digitalWrite(3,0);
  delay(600);
  digitalWrite(3,1);
  delay(600);
  digitalWrite(3,0);
  delay(600);
  digitalWrite(3,1);
  delay(600);
  digitalWrite(3,0);
  delay(600);
  lcd.begin(16, 2);
  lcd.clear();
  lcd.noCursor();
  delay(500);
  lcd.print("Assalammualaikum");
  lcd.setCursor(0,1);
  lcd.print("Warrahmatullah");
  lcd.setCursor(1,5);
  delay(2000);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  
  delay(2500);
  lcd.clear();
  
  lcd.print("Welcome To");
  lcd.setCursor(0,3);
  delay(2000); 
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);  
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
   lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);  
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
   lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);  
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);  
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
   lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);  
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
   lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);  
  lcd.scrollDisplayLeft();
  delay(200);
   lcd.scrollDisplayLeft();
  delay(200);
   lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);
  lcd.scrollDisplayLeft();
  delay(200);  
  lcd.scrollDisplayLeft();
  delay(200);

  lcd.print("Jemuran Otomatis");
  lcd.setCursor(1,0);
  delay(2000); lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
   lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);  
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  lcd.scrollDisplayRight();
  delay(200);
  delay(200);
  delay(2500);
  lcd.clear();
  
}


void loop() {

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  
  float hic = dht.computeHeatIndex(t, h, false);
  
  int cahaya = analogRead(A0);
  int hujan = analogRead(A3);
   
  lcd.setCursor(0, 0);
  lcd.print("SUHU=");
  lcd.print(h,1);

  lcd.setCursor(0, 1);
  lcd.print("CHY=");
  lcd.print(cahaya);
  
  lcd.setCursor(8, 1);
  lcd.print("HJN=");
  lcd.print(hujan);

delay(1000);

if((hujan < 500) && (h > 60.10) && (mark == 0)){
delay(200);
mark = 1; 
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Cuaca Teduh");
Hujan();
}

if((cahaya < 500)&&(mark == 0)){
delay(200);
mark = 1; 
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Cuaca Teduh");
Hujan();
}

if((cahaya > 500)&&(hujan > 500)&&(mark == 1)){
delay(200);
mark = 0;
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("Cuaca Cerah");
Panas();
}


}




void Hujan(){
digitalWrite(3,1);
delay(500);
digitalWrite(3,0);
delay(500);
digitalWrite(3,1);
delay(500);
digitalWrite(3,0);
delay(500);
digitalWrite(3,1);
delay(500);
digitalWrite(3,0);
delay(500);
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
delay(5);
digitalWrite(3,1);
delay(900);
digitalWrite(3,0);



//int a = digitalRead(A2);

//if(a == 0){
digitalWrite(10,LOW);
digitalWrite(11,LOW);
delay(5);
lcd.clear();
return;
//}

Hujan();

}


void Panas(){
digitalWrite(3,1);
delay(200);
digitalWrite(3,0);
delay(200);
digitalWrite(3,1);
delay(200);
digitalWrite(3,0);
delay(200);
digitalWrite(3,1);
delay(200);
digitalWrite(3,0);
delay(200);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
delay(10);
digitalWrite(3,1);
delay(900);
digitalWrite(3,0);


//int b = digitalRead(A3);

//if(b == 0){
digitalWrite(10,LOW);
digitalWrite(11,LOW);
delay(10);
lcd.clear();
return;
//}

Panas();

}

