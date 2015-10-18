int led1=10;
int led2=9;
int led3=8;
int led4=7;
int led5=6;
int led6=5;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(led4,OUTPUT);
pinMode(led5,OUTPUT);
pinMode(led6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (led1,HIGH);
delay(100);
digitalWrite (led1,LOW);
digitalWrite (led2,HIGH);
delay(100);
digitalWrite (led2,LOW);
digitalWrite (led3,HIGH);
delay(100);
digitalWrite (led3,LOW);
digitalWrite (led4,HIGH);
delay(100);
digitalWrite (led4,LOW);
digitalWrite (led5,HIGH);
delay(100);
digitalWrite (led5,LOW);
digitalWrite (led6,HIGH);
delay(100);
digitalWrite (led6,LOW);


}
