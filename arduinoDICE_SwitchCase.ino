/////////////////////////////////////////////////////////////////////////
 /* This piece of software is protected under the license of UniLicense.
  * 
  * For more details, head to: https://unlicense.org/
  * 
  * Created & Released by: iDeimos
  */
/////////////////////////////////////////////////////////////////////////
  // Defining our LEDs
 const int led2 = 2;
 const int led3 = 3;
 const int led4 = 4;
 const int led5 = 5;
 const int led6 = 6;
 const int led7 = 7;
 const int led8 = 8;
char diceRoll;
int pinCount = 7;

 // Adding our LEDs to an array
int ledPins[] = {
  led2, led3, led4, led5, led6, led7, led8
};
/////////////////////////////////////////////////////////////////////////
void setup() {
 // Initialize serial communication w/ the baudrate 9600
Serial.begin(9600);

  // This for-loop sets all the LEDs in our array to OUTPUT
  for (int thisPin = 0; thisPin < pinCount; thisPin++) 
    {
      pinMode(ledPins[thisPin], OUTPUT);
    }
}
/////////////////////////////////////////////////////////////////////////
void turnLEDoff ()
{
  // This for-loop makes us able to call the function "turnLEDoff" to shut
  // off all LEDs at once, without having to call them individually.
  for(int thisPin = 0; thisPin < pinCount; thisPin++)
        {
          digitalWrite(ledPins[thisPin], LOW);
        }
}
/////////////////////////////////////////////////////////////////////////
void definecommunication()
{
  // The main code to send/recieve serial signals
  if(Serial.available() > 0){

      // This is the keyword used throughout the code that ensures we
      // can recieve any code from our Python script, by reading incoming
      // Serial data.
      diceRoll = Serial.read();
      delay(50);
}
}
/////////////////////////////////////////////////////////////////////////
void loop()
{
  definecommunication();
  switch (diceRoll)
  {
      case 0:
        turnLEDoff();
        break;
    
      case '1':
        turnLEDoff();
        digitalWrite(led5, HIGH);
        delay(500);
        turnLEDoff();
        break;

  case '2':
        turnLEDoff();
        digitalWrite(led2, HIGH);
        digitalWrite(led8, HIGH);
        delay(500);
        turnLEDoff();
        break;

  case '3':
        turnLEDoff();
        digitalWrite(led8, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led2, HIGH);
        delay(500);
        turnLEDoff();
        break;
        
  case '4':
        turnLEDoff();
        digitalWrite(led8, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led4, HIGH);
        digitalWrite(led2, HIGH);
        delay(500);
        turnLEDoff();
        break;

  case '5':
        turnLEDoff();
        digitalWrite(led8, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led5, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led4, HIGH);
        delay(500);
        turnLEDoff();
        break;

  case '6':
        turnLEDoff();
        digitalWrite(led8, HIGH);
        digitalWrite(led7, HIGH);
        digitalWrite(led6, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        delay(500);
        turnLEDoff();
        break;
  }
}
