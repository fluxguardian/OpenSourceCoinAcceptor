int prev_value = 0;
int lo_val=1023;
#define DEL 500
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  prev_value = prev_value*0.5 + 0.5*analogRead(A0);

    while(Serial.available()){
      lo_val = 1023;
      char c = Serial.read();
      switch(c){
        case 'r':
        lo_val = 1023;
        while(Serial.available()) Serial.read();
        break;
        case 'n':
        default :
        digitalWrite(7, HIGH);
        delayMicroseconds(DEL);
        digitalWrite(7, LOW);
        delayMicroseconds(DEL);
        break;
        }
      }

    if(lo_val > prev_value) lo_val=prev_value;
  //Serial.print("v = \t");Serial.print(prev_value);
  Serial.print("EM_VAL = ");Serial.println(lo_val);
   digitalWrite(7, HIGH);
        delayMicroseconds(DEL);
        digitalWrite(7, LOW);
        delayMicroseconds(DEL);
  //Serial.print("\t"
  //delay(2);
}
