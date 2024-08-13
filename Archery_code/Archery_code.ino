
//Archery code, Written by Nauser Alam on 24/10/2023;
#include<Wire.h>
#include <LiquidCrystal_I2C.h>
#include<string.h>
#include <SoftwareSerial.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
SoftwareSerial BTSerial(10, 11);
#define lcd_pin1 A0;
#define lcd_pin2 A1;
#define lcd_pin3 A2;
#define lcd_pin4 A3;
#define lcd_pin5 A4;
//#define led1 8;
//#define led2 9;
//#define buzzer 10;
int c=0;
int e=990,e1=499,e2=699,e3=800,e4=920;


void setup() {
  int led1=8;
  int led2=9;
  int led3=10;
  int led4=11;
  int led5=12;
  int buzzer=7;
 //lcd.begin(16,2);
 lcd.init();
  lcd.setBacklight(1);
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(buzzer,OUTPUT);
   displayMovingWords(100);
    
}

  
void loop(){ 
  int analogreading1=analogRead(A0);
  int analogreading2=analogRead(A1);
  int analogreading3=analogRead(A2);
  int analogreading4=analogRead(A3);
  int analogreading5=analogRead(A4);
//  int analogreading2=analogRead(A1);
//  Serial.print("p1=");
//  Serial.print(analogreading1);
//  delay(100);
// Serial.println("p2=");
// Serial.print(analogreading2);
//  delay(100);
//    Serial.println("pressure3=");
//  Serial.print(analogreading3);
//    delay(100);
// Serial.println("pressure4=");
// Serial.print(analogreading4);
//  delay(100);
//   Serial.println("pressure5=");
// Serial.print(analogreading5);

 delay(500);
 //***************************************************************
  if (analogreading1>e) {
    e=analogreading1;
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    lcd.clear();
    c=c+10;
    BTSerial.print(10);
    BTSerial.print(c);
    lcd.setCursor(0,0);
    lcd.print("Score=10");
    lcd.setCursor(0,1);
    lcd.print("total score=");
    lcd.print(c);
    Serial.print(10);
    //Serial.print(c);
    delay(1000);
    
  }

  
  //****************************************************************

  //****************************************************************
   if (analogreading2>e1) {
     e1=analogreading2;
    digitalWrite(9,HIGH);
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(9,LOW);
    digitalWrite(7,LOW);
     
    c=c+8;
    BTSerial.print(8);
    BTSerial.print(c);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Score=8");
    lcd.setCursor(0,1);
    lcd.print("Total score=");
    lcd.print(c);
    Serial.print(8);
    //Serial.print(c);
    delay(1000);
      }
      //***************************************************************
      //***************************************************************
         if (analogreading3>e2) {
     e2=analogreading3;
    digitalWrite(10,HIGH);
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(10,LOW);
    digitalWrite(7,LOW);
     
    c=c+6;
    BTSerial.print(6);
    BTSerial.print(c);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Score=6");
    lcd.setCursor(0,1);
    lcd.print("Total score=");
    lcd.print(c);
    Serial.print(6);
    //Serial.print(c);
    delay(1000);
    }

      //***************************************************************

            //***************************************************************
         if (analogreading4>e3) {
     e3=analogreading4;
    digitalWrite(11,HIGH);
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(11,LOW);
    digitalWrite(7,LOW);
     
    c=c+4;
    BTSerial.print(4);
    BTSerial.print(c);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Score=4");
    lcd.setCursor(0,1);
    lcd.print("Total score=");
    lcd.print(c);
    Serial.print(4);
    //Serial.print(c);
    delay(1000);
    }

      //***************************************************************

            //***************************************************************
         if (analogreading5>e4) {
     e4=analogreading5;
    digitalWrite(12,HIGH);
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(12,LOW);
    digitalWrite(7,LOW);
     
    c=c+2;
    BTSerial.print(2);
    BTSerial.print(c);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Score=2");
    lcd.setCursor(0,1);
    lcd.print("Total score=");
    lcd.print(c);
    Serial.print(2);
    //Serial.print(c);
    delay(1000);
    }

      //***************************************************************

}
  /////////////////////////////////////

// Function to display moving words;
void displayMovingWords(int speed) {
  lcd.setCursor(1,0);
  lcd.print("Y");
  delay(speed);
  
    lcd.setCursor(2,0);
  lcd.print("O");
  delay(speed);
  
    lcd.setCursor(3,0);
  lcd.print("U");
  delay(speed);
  
    lcd.setCursor(5,0);
  lcd.print("A");
  delay(speed);
  
    lcd.setCursor(6,0);
  lcd.print("R");
  delay(speed);
  
    lcd.setCursor(7,0);
  lcd.print("E");
  delay(speed);
  
    lcd.setCursor(9,0);
  lcd.print("W");
  delay(speed);
  
    lcd.setCursor(10,0);
  lcd.print("E");
  delay(speed);
  
    lcd.setCursor(11,0);
  lcd.print("L");
  delay(speed);
  
    lcd.setCursor(12,0);
  lcd.print("C");
  delay(speed);
  
    lcd.setCursor(13,0);
  lcd.print("O");
  delay(speed);
  
    lcd.setCursor(14,0);
  lcd.print("M");
  delay(speed);
  
    lcd.setCursor(15,0);
  lcd.print("E");
  delay(speed);
  
  //////////////////////////////////////
  
}
