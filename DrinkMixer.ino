#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// set up the LCD's number of columns and rows:
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int Aled = 13;
int selector = 0;

const int rb = 5;
const int mb = 6;
const int lb = 7;

int rButton = 0;
int mButton = 0;
int lButton = 0;

const int dirPin = 4;
const int stepPin = 3;

void setup() {
  //pinMode(lcd, OUTPUT);
  pinMode(Aled, OUTPUT);
  pinMode(rb, INPUT);
  pinMode(mb, INPUT);
  pinMode(lb, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  //analogWrite(led, 0);
  lcd.init();
  //lcd.noBacklight();
  lcd.backlight();
  lcd.clear();
  
  lcd.setCursor(3,0);
  lcd.print("Hello, world!");
  Serial.begin(9600);
}

void loop() {
  digitalWrite(dirPin, HIGH);

  for (int x = 0; x < 200; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(1000);
  }
  delay(1000);
}

//void loop() {
//  //Resets cursor, writes on line 1, first spot
//  //lcd.clear();
//  rButton = digitalRead(rb);
//  mButton = digitalRead(mb);
//  lButton = digitalRead(lb);
//  //Højeste 255 laveste 0 //0 = Max Volt. 255 Mindste volt
//  
//   if (digitalRead(rb) == HIGH) {
//    lcd.print("Right!");
//    Serial.print("right");
//  }
//  
////  if (digitalRead(rb) == HIGH) {
////    lcd.print("Right!");
////    if (selector != 05) {
////      selector = selector + 01;
////      
////    }
////    delay(300);
////    //lcd.clear();
////  }
////  if (digitalRead(lb) == HIGH) {
////    lcd.print("Left!");
////    if (selector != 00) {
////      selector = selector - 01;
////      
////      //lcd.clear();
////    } if (selector == 0) {
////      selector = selector + 3;
////      //lcd.clear();
////    }
////    delay(300);
////  }
//
//  switch (selector) {
//    case 1:
//      //romCola();
//      break;
//
//    case 2:
//      //ginHas();
//      break;
//
//    case 3:
//      //ginTonic();
//      break;
//
//    case 4:
//      //https://shake-it.dk/drink/filur/
//      break;
//
//    case 5:
//      //https://shake-it.dk/drink/isbjoern-drink/
//      break;
//
//    case 6:
//      //https://shake-it.dk/drink/gin-og-tonic/
//      break;
//
//    case 7:
//      //https://shake-it.dk/drink/aeblekage-drink/
//      break;
//
//    case 8:
//      //https://shake-it.dk/drink/brandbil/
//      break;
//
//    case 9:
//
//      break;
//  }
//  //delay(1000);
//  lcd.clear();
//}

void romCola() {
  lcd.setCursor(0, 0);
  lcd.print("Rom og Cola");
  if (mButton == HIGH) {
    //digitalWrite(lcd, 0);
    lcd.setCursor(0, 1);
    lcd.print("Selected");
    delay(10000);
    //lcd.noBacklight();
  }
}
void ginHas() {
  lcd.setCursor(0, 0);
  lcd.print("Ginhas");
  if (mButton == HIGH) {
    //digitalWrite(lcd, 255);
    lcd.setCursor(0, 1);
    lcd.print("Selected");
    delay(5000);
  }
}
void ginTonic() {
  //lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Gin & Tonic");
  if (mButton == HIGH) {
    //digitalWrite(led, 255);
    lcd.setCursor(0, 1);
    lcd.print("Selected");
    delay(5000);
  }
}
