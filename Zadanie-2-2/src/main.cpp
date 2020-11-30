#include <SoftwareSerial.h>
const int buttonPin1 = 10;     
const int buttonPin2 =  11;      

int diody[] = {2, 3, 4, 5, 6, 7, 8, 9};
#define SIZE 8
int i;
int s = 1;
int buttonState1 = 0;
int buttonState2 = 0;  

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);

  for (i = 0; i < SIZE; i++)
  {
    pinMode(diody[i], OUTPUT);
  }
}

void loop() {
  
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

if (buttonState1 == HIGH) {
s = 1;
}

if (buttonState2 == HIGH) {
s = 2;
}

Serial.println(s);
  
if (s == 2){
for (i = 0; i < SIZE; i++) 
{
    digitalWrite(diody[i], HIGH);
    delay(200);
    digitalWrite(diody[i], LOW);
  }
}
  
  if (s == 1){
for (i = 8; i > 0; i--) 
{
    digitalWrite(diody[i], HIGH);
    delay(200);
    digitalWrite(diody[i], LOW);
  }
}

}