 int Pinmerah =  2;      
 int Pinkuning =  4;      
 int Pinhijau =  5;     

int merah = HIGH;            
int kuning = HIGH;             
int hijau = HIGH;      
       
long Waktumulai = 0;  
      
long interval = 30000;    
         
void setup() {
pinMode(Pinmerah, OUTPUT);  
pinMode(Pinkuning, OUTPUT);      
pinMode(Pinhijau, OUTPUT);      
}

void loop()
{
  unsigned long cekwaktu = millis();
  unsigned long elapsedTime = cekwaktu - Waktumulai;
      if(elapsedTime > interval) {
        Waktumulai = cekwaktu;   
        }
      if (elapsedTime < 10000){
        merah = HIGH;             
        kuning = HIGH;            
        hijau = LOW;   
        }
      if (elapsedTime > 10000 && elapsedTime < 15000 ){
        merah = HIGH;             
        kuning = LOW;            
        hijau = HIGH ;   
        }
      if (elapsedTime > 15000  ){
        merah = LOW;             
        kuning = HIGH;            
        hijau = HIGH ;   
        }
        digitalWrite(Pinmerah,merah);
        digitalWrite(Pinhijau,hijau);
        digitalWrite(Pinkuning,kuning);

}
