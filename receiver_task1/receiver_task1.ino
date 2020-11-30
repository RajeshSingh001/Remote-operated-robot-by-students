
 #include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int x = 10;
int y = 9;
int z = 8;
int w = 7;
int M16 = 6;
int M21 = 13;

void setup() 
{
  lcd.begin(16,2);
  // initialize serial:
  Serial.begin(9600);
 pinMode(x, OUTPUT); 
 pinMode(y, OUTPUT);
 pinMode(z, OUTPUT);
 pinMode(w, OUTPUT);
 pinMode(M16, OUTPUT);
 pinMode(M21, OUTPUT);
}

void loop() 
{
  // print the string when a newline arrives:
  int fsr1 = Serial.read();
  if (fsr1 == 1)
  {

    lcd.setCursor(0,0);
    lcd.print("   FORWARD");
    digitalWrite(M16, HIGH);
    digitalWrite(M21, HIGH);
    digitalWrite(x, HIGH);
    digitalWrite(y, LOW);
    digitalWrite(z, HIGH);
    digitalWrite(w, LOW);
    
  }
    else if(fsr1 == 2)
    {
    
      lcd.setCursor(0,0);
      lcd.print("  BACKWARD");
    digitalWrite(M16, HIGH);
  digitalWrite(M21, HIGH);  
    digitalWrite(x, LOW);
    digitalWrite(y, HIGH);
    digitalWrite(z, LOW);
    digitalWrite(w, HIGH); 
    }
 else if(fsr1 == 3)
    {
     
      lcd.setCursor(0,0);
      lcd.print("RIGHT TURN"); 
      digitalWrite(M16, HIGH);
      digitalWrite(M21, LOW);
    digitalWrite(x, HIGH);
    digitalWrite(y, LOW);
    digitalWrite(z, LOW);
    digitalWrite(w, LOW);  
    }
 else if(fsr1 == 4)
    {
      
      lcd.setCursor(0,0);
      lcd.print("LEFT TURN");
      digitalWrite(M16, LOW);
      digitalWrite(M21, HIGH);
    digitalWrite(x, LOW);
    digitalWrite(y, LOW);
    digitalWrite(z, HIGH);
    digitalWrite(w, LOW);   
    }
    else
    {
    
        lcd.setCursor(0,0);
      lcd.print("    STOP    ");
    digitalWrite(M16, LOW);
  digitalWrite(M21, LOW);  
   
    }
  
 
}


