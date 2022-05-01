#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); //(RS,EN,D4,D5,D6,D7)
int inpVal;
float outVolt;
void setup() {
  pinMode(A0, INPUT);
  lcd.begin(16, 2);
}
void loop() {
  // put your main code here, to run repeatedly:
  lcd.clear(); 
    inpVal= analogRead(A0);
    outVolt= (inpVal * (230.0/1023) );
    lcd.setCursor(0,0);
    lcd.print("AC Voltage");
    //delay(1000);
    lcd.setCursor(0,1);
    lcd.print(outVolt); // display
    delay(500);
}
