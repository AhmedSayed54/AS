
//repository link: https://github.com/AhmedSayed54/AS.git

#define SW 13 //pin 13 has its led on the board and there is no need to use serial print.
#define M1 8
#define M2 9
#define EN 10
#define LED 3 //three leds are connected in series so there is no need to redifine them.
int S_val;
void setup() {
  pinMode(SW, INPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  S_val = digitalRead(SW);
  if(S_val == HIGH){
    digitalWrite(EN, S_val);
    digitalWrite(LED, HIGH);
    digitalWrite(M1, HIGH);
    digitalWrite(M2, LOW);    

  }else{
    digitalWrite(M2, LOW);
    digitalWrite(M1, LOW);
    digitalWrite(LED, LOW);

  }
}
