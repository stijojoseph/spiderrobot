
#include <Servo.h>
Servo ser; Servo ser1;Servo ser2; 
Servo ser3;Servo ser4;Servo ser5;
Servo ser6; Servo ser7;
int p;
void setup()
{ser1.attach(12);
   ser2.attach(11);
    ser3.attach(10);
     ser.attach(13);
    ser4.attach(8);
    ser5.attach(9);
    ser6.attach(6);
    ser7.attach(7);
    
    Serial.begin(9600);
}
void loop(){
if(Serial.available())
    p=Serial.read();
   delay(10);
if(p=='2')
   {for(int i=0;i<90;i++)
       {ser1.write(i);
        ser.write(i);
            
       
        
        ser2.write(i);
            ser3.write(i); 
            delay(10);}}
   
        

if(p=='1')
{
   for(int y=0,s=90;y<90&&s>0;s--,y++)
    {ser4.write(s);
            delay(90);
        ser5.write(y);
            delay(80);
        ser6.write(y);  
delay(80);    ser7.write(s);
    delay(10);     } }int k=0,m=0;
    if(p=='3')
    {
         for(;m<90;m++)
        {ser.write(m);
            delay(10);}
        for(;k<90&&m>0;k++,m--)
        {ser.write(m);delay(6);
            ser5.write(k);
            delay(18);}
     
   for(;m<90;m++)
        {ser.write(m);
            delay(5);}
        
 } k=0,m=90;
    if(p=='4')
    {
        
        for(;m>0;m--)
        {ser1.write(m);delay(6);
            ser4.write(m);
            delay(18);}
      for(;m<90;m++)
        {ser1.write(m);
            delay(15);}
   for(;m<90;m++)
        {ser4.write(m);
            delay(15);}
        
 }k=0,m=0;
    if(p=='5')
    {k=0;
         for(;m<90;m++)
        {ser3.write(m);
            delay(5);}
        for(;k<90&&m>0;k++,m--)
        {ser6.write(m);
           delay(7);
             ser3.write(k);
            delay(18);}
        for(m=0;m<90;m++)
        
     {ser6.write(m);delay(15);}
   
        
 }k=0,m=0;
    if(p=='6')
    {
        
       
     
   for(;m<90;m++)
        {ser2.write(m);
            ser7.write(m);
            delay(18);}
  
        for(;m>0;m--)
        {ser7.write(m);delay(13);}
        
              
 }}