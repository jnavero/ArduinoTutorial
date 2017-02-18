#define RED_LED_PIN 6
#define YELLOW_LED_PIN 5
#define GREEN_LED_PIN 4
#define SWITCHS_PIN A0

int switchStatus = 0;

void setup() {

   pinMode(GREEN_LED_PIN, OUTPUT);
   pinMode(YELLOW_LED_PIN, OUTPUT);
   pinMode(RED_LED_PIN, OUTPUT);
   pinMode(SWITCHS_PIN, INPUT);

   Serial.begin(9600);
}

void loop() {
   digitalWrite(GREEN_LED_PIN, LOW);
   digitalWrite(YELLOW_LED_PIN, LOW);
   digitalWrite(RED_LED_PIN, LOW);

   switchStatus = analogRead(SWITCHS_PIN);
   Serial.println(switchStatus);

   if(switchStatus == 1023)
   {
      digitalWrite(RED_LED_PIN, HIGH);
   }
   else if (switchStatus >= 990 && switchStatus <= 1010)
   {
      digitalWrite(YELLOW_LED_PIN, HIGH);
   }
   else if (switchStatus >= 500 && switchStatus <= 520)
   {
      digitalWrite(GREEN_LED_PIN, HIGH);
   }
   delay(10);
}

