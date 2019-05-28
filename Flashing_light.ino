const int Led1=7;    //設定第七腳位的名字

void setup() {
pinMode(Led1,OUTPUT);  //將第七腳位設為輸出
 
}
void loop() {

digitalWrite(Led1,HIGH);  //設腳位 為 高電壓
delay(50);                //延遲50毫秒
digitalWrite(Led1,LOW);
delay(50);

}
