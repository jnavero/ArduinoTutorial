#define RED_LED_PIN 6
#define YELLOW_LED_PIN 5
#define GREEN_LED_PIN 4
#define SWITCH_PIN 3

int switchState = 0;


void setup()
{
   pinMode(GREEN_LED_PIN, OUTPUT);
   pinMode(YELLOW_LED_PIN, OUTPUT);
   pinMode(RED_LED_PIN, OUTPUT);
   pinMode(SWITCH_PIN, INPUT);

   Serial.begin(9600);
}

void loop()
{
   digitalWrite(GREEN_LED_PIN, HIGH);
   digitalWrite(YELLOW_LED_PIN, LOW);
   digitalWrite(RED_LED_PIN, LOW);

   switchState = digitalRead(SWITCH_PIN);

   if(switchState == HIGH)
   {
      Serial.println("Boton pulsado");
      delay(2000);
      digitalWrite(GREEN_LED_PIN, LOW);
      digitalWrite(YELLOW_LED_PIN, HIGH);
      Serial.println("AMARIllO");
      delay(3000);
      digitalWrite(YELLOW_LED_PIN, LOW);
      digitalWrite(RED_LED_PIN, HIGH);
      Serial.println("ROJO");
      delay(5000);
      Serial.println(".FIN DE LA SECUENCIA.");
   }
   delay(100);
}
