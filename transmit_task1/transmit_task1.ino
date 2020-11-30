 

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int s1 = 10;
int s2 = 8;
int s3 = 9;
int s4 = 7;
void setup() 
{
  Serial.begin(9600);
  pinMode(s1, INPUT_PULLUP);
  pinMode(s2, INPUT_PULLUP);
  pinMode(s3, INPUT_PULLUP);
  pinMode(s4, INPUT_PULLUP);
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("WIRELESS");
  lcd.setCursor(0, 1);
  lcd.print("CAR");
  delay(500);
  lcd.clear();
}

void loop()
{
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  int e = 20;
  if(digitalRead(s1) == LOW)
  {
    Serial.write(a);
   
    lcd.setCursor(0, 0);
    lcd.print("   FORWARD");
  }
  else if(digitalRead(s2) == LOW)
  {
    Serial.write(b);
   
    lcd.setCursor(0, 0);
    lcd.print("  BACKWARD");
  }
  else if(digitalRead(s3) == LOW)
  {
    Serial.write(c);
  
    lcd.setCursor(0, 0);
    lcd.print("RIGHT TURN");
  }
  else if(digitalRead(s4) == LOW)
  {
    Serial.write(d);
   
    lcd.setCursor(0, 0);
    lcd.print("LEFT TURN");
  }
  else
  {
    
    Serial.write(e);
    lcd.print("    START     ");
    lcd.clear();
  }
  
}
