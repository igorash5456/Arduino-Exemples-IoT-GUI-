#define Button1 207
#define Button2 257
#define Button3 341
#define Button4 512
#define Button5 1023
#define Err 5
int butPress = 0;

void setup(){

  Serial.begin(9600);

}

void loop(){
pushTest();
Serial.println(butPress);
delay(1000);

}

void pushTest(){

int a = analogRead(A6);
if (a >= Button1 - Err && a <= Button1 + Err) {
  butPress = 1;
} else if (a >= Button2 - Err && a <= Button2 + Err) {
  butPress = 2;
} else if (a >= Button3 - Err && a <= Button3 + Err) {
  butPress = 3;
} else if (a >= Button4 - Err && a <= Button4 + Err) {
  butPress = 4;
} else if (a >= Button5 - Err && a <= Button5 + Err) {
  butPress = 5;
} else {butPress = 0; }
}