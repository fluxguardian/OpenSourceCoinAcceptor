#define PULSE_PIN 7
#define POT_IN  A5
int period = 0;
int new_prd=0;
int pot_val=0;
void setup() {
  // put your setup code here, to run once:
pinMode(PULSE_PIN, OUTPUT);
Serial.begin(9600);
period=map(analogRead(POT_IN), 100, 900, 1, 100);
}

void loop() {
  // put your main code here, to run repeatedly:
  pot_val = analogRead(A0);
  period = (int)(period*0.9 + 0.1*map(pot_val, 300, 550, 1, 50));
 // period /= 100;
  Serial.println(pot_val);
 //Serial.println(pot_val);
digitalWrite(PULSE_PIN, LOW);
delay(4);
digitalWrite(PULSE_PIN, HIGH);
delay(4);

}
