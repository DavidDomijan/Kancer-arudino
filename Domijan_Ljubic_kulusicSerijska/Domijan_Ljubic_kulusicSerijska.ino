int led=10;

void setup() {
   pinMode(10,OUTPUT);
digitalWrite(led,HIGH);

}

void loop() {
//cekanje
digitalWrite(led,HIGH);

//start bit
digitalWrite(led,LOW);
delay(1000);

//slovo a
digitalWrite(led,LOW);
delay(1000);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,HIGH);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
digitalWrite(led,LOW);
delay(1000);
digitalWrite(led,HIGH);
delay(1000);

//stop bit
digitalWrite(led,HIGH);
delay(10000);


}

