/*
 * Test for 5X7 LED matrix
 * 
 * Date: 3-10-2017
 * 
 * PIN CONFIGURATION:LED
 * 
 * 1 CL3           8  CL5
 * 2 CL1           9  CL7
 * 3 RW2           10 RW4
 * 4 RW3           11
 * 5 CL4           12
 * 6 RW5           13 RW1
 * 7 CL2           14 CL6
 * 
 * Developers: Rahul Itnal and Himanshu Rangadhol
 * 
 * Place: Envision Lab
 */

 int anodeclm1 = 13; //Columns which are given positive for working
 int anodeclm2 = 12;
 int anodeclm3 = 11;
 int anodeclm4 = 10;
 int anodeclm7 = 9;
 int anodeclm6 = 8;
 int anodeclm5 = 7;

 int cathrow1 = 2;  //Rows which are given negative for working
 int cathrow2 = 3;
 int cathrow3 = 4;
 int cathrow4 = 5;
 int cathrow5 = 6; 
 void setup() {
  
  pinMode( anodeclm1 , OUTPUT);
  pinMode( anodeclm2 , OUTPUT);
  pinMode( anodeclm3 , OUTPUT);
  pinMode( anodeclm4 , OUTPUT);
  pinMode( anodeclm5 , OUTPUT);
  pinMode( anodeclm6 , OUTPUT);
  pinMode( anodeclm7 , OUTPUT);
  pinMode( cathrow1 , OUTPUT);
  pinMode( cathrow2 , OUTPUT);
  pinMode( cathrow3 , OUTPUT);
  pinMode( cathrow4 , OUTPUT);
  pinMode( cathrow5, OUTPUT);
  

}

void loop() {
 /*digitalWrite(anodeclm1, HIGH);
  digitalWrite(anodeclm2, HIGH);
   digitalWrite(anodeclm3, HIGH);
    digitalWrite(anodeclm4, HIGH);
     digitalWrite(anodeclm5, HIGH);
      digitalWrite(anodeclm6, HIGH);
       digitalWrite(anodeclm7, HIGH);
   digitalWrite(cathrow1, LOW);
    digitalWrite(cathrow2, LOW);
     digitalWrite(cathrow3, LOW);
      digitalWrite(cathrow4, LOW);
       digitalWrite(cathrow5, LOW);

       delay(1000);

        digitalWrite(anodeclm1, LOW);  //COL1
  digitalWrite(anodeclm2, HIGH);
   digitalWrite(anodeclm3, HIGH);
    digitalWrite(anodeclm4, HIGH);
     digitalWrite(anodeclm5, HIGH);
      digitalWrite(anodeclm6, HIGH);
       digitalWrite(anodeclm7, HIGH);
   digitalWrite(cathrow1, LOW);
    digitalWrite(cathrow2, LOW);
     digitalWrite(cathrow3, LOW);
      digitalWrite(cathrow4, LOW);
       digitalWrite(cathrow5, LOW);

       delay(1000);

       
        digitalWrite(anodeclm1, HIGH);   // COL 2
  digitalWrite(anodeclm2, LOW); 
   digitalWrite(anodeclm3, HIGH);
    digitalWrite(anodeclm4, HIGH);
     digitalWrite(anodeclm5, HIGH);
      digitalWrite(anodeclm6, HIGH);
       digitalWrite(anodeclm7, HIGH);
   digitalWrite(cathrow1, LOW);
    digitalWrite(cathrow2, LOW);
     digitalWrite(cathrow3, LOW);
      digitalWrite(cathrow4, LOW);
       digitalWrite(cathrow5, LOW);

       delay(1000);

digitalWrite(anodeclm1, HIGH);  //COL3
  digitalWrite(anodeclm2, HIGH);
   digitalWrite(anodeclm3, LOW);
    digitalWrite(anodeclm4, HIGH);
     digitalWrite(anodeclm5, HIGH);
      digitalWrite(anodeclm6, HIGH);
       digitalWrite(anodeclm7, HIGH);
   digitalWrite(cathrow1, LOW);
    digitalWrite(cathrow2, LOW);
     digitalWrite(cathrow3, LOW);
      digitalWrite(cathrow4, LOW);
       digitalWrite(cathrow5, LOW);

       delay(1000);

       
        digitalWrite(anodeclm1, HIGH);   // COL 4
  digitalWrite(anodeclm2, HIGH); 
   digitalWrite(anodeclm3, HIGH);
    digitalWrite(anodeclm4, LOW);
     digitalWrite(anodeclm5, HIGH);
      digitalWrite(anodeclm6, HIGH);
       digitalWrite(anodeclm7, HIGH);
   digitalWrite(cathrow1, LOW);
    digitalWrite(cathrow2, LOW);
     digitalWrite(cathrow3, LOW);
      digitalWrite(cathrow4, LOW);
       digitalWrite(cathrow5, LOW);

       delay(1000);
       digitalWrite(anodeclm1, HIGH);  //COL5
  digitalWrite(anodeclm2, HIGH);
   digitalWrite(anodeclm3, HIGH);
    digitalWrite(anodeclm4, HIGH);
     digitalWrite(anodeclm5, HIGH);
      digitalWrite(anodeclm6, HIGH);
       digitalWrite(anodeclm7, LOW);
   digitalWrite(cathrow1, LOW);
    digitalWrite(cathrow2, LOW);
     digitalWrite(cathrow3, LOW);
      digitalWrite(cathrow4, LOW);
       digitalWrite(cathrow5, LOW);

       delay(1000);

       

   

       digitalWrite(anodeclm1, HIGH);  //COL6
  digitalWrite(anodeclm2, HIGH);
   digitalWrite(anodeclm3, HIGH);
    digitalWrite(anodeclm4, HIGH);
     digitalWrite(anodeclm5, HIGH);
      digitalWrite(anodeclm6, LOW);
       digitalWrite(anodeclm7, HIGH);
   digitalWrite(cathrow1, LOW);
    digitalWrite(cathrow2, LOW);
     digitalWrite(cathrow3, LOW);
      digitalWrite(cathrow4, LOW);
       digitalWrite(cathrow5, LOW);

       delay(1000);
       digitalWrite(anodeclm1, HIGH);  //COL7
  digitalWrite(anodeclm2, HIGH);
   digitalWrite(anodeclm3, HIGH);
    digitalWrite(anodeclm4, HIGH);
     digitalWrite(anodeclm5, LOW);
      digitalWrite(anodeclm6, HIGH);
       digitalWrite(anodeclm7, HIGH);
   digitalWrite(cathrow1, LOW);
    digitalWrite(cathrow2, LOW);
     digitalWrite(cathrow3, LOW);
      digitalWrite(cathrow4, LOW);
       digitalWrite(cathrow5, LOW);
           delay(1000);
       */

digitalWrite(anodeclm1, HIGH); //BITR1C1
digitalWrite(cathrow1, LOW);
delay(1);
digitalWrite(anodeclm1, LOW);
digitalWrite(cathrow1, HIGH);
delay(1);
digitalWrite(anodeclm1, HIGH);//BITR2C1
digitalWrite(cathrow2, LOW);
delay(1);
digitalWrite(anodeclm1, LOW);
digitalWrite(cathrow2, HIGH);
delay(1);

digitalWrite(anodeclm1, HIGH);//BITR3C1
digitalWrite(cathrow3, LOW);
delay(1);
digitalWrite(anodeclm1, LOW);
digitalWrite(cathrow3, HIGH);
delay(1);
digitalWrite(anodeclm1, HIGH); //BITR4C1
digitalWrite(cathrow4, LOW);
delay(1);
digitalWrite(anodeclm1, LOW);
digitalWrite(cathrow4, HIGH);
delay(1);
digitalWrite(anodeclm1, HIGH); //BITR5C1
digitalWrite(cathrow5, LOW);
delay(1);
digitalWrite(anodeclm1, LOW);
digitalWrite(cathrow5, HIGH);
delay(1);

digitalWrite(anodeclm4, HIGH); //BITR1C4
digitalWrite(cathrow1, LOW);
delay(1);
digitalWrite(anodeclm4, LOW);
digitalWrite(cathrow1, HIGH);
delay(1);
digitalWrite(anodeclm4, HIGH);//BITR2C4
digitalWrite(cathrow2, LOW);
delay(1);
digitalWrite(anodeclm4, LOW);
digitalWrite(cathrow2, HIGH);
delay(1);

digitalWrite(anodeclm4, HIGH);//BITR3C4
digitalWrite(cathrow3, LOW);
delay(1);
digitalWrite(anodeclm4, LOW);
digitalWrite(cathrow3, HIGH);
delay(1);
digitalWrite(anodeclm4, HIGH); //BITR4C4
digitalWrite(cathrow4, LOW);
delay(1);
digitalWrite(anodeclm4, LOW);
digitalWrite(cathrow4, HIGH);
delay(1);
digitalWrite(anodeclm4, HIGH); //BITR5C4
digitalWrite(cathrow5, LOW);
delay(1);
digitalWrite(anodeclm4, LOW);
digitalWrite(cathrow5, HIGH);
delay(1);
digitalWrite(anodeclm2, HIGH); //BITR1C2
digitalWrite(cathrow1, LOW);
delay(1);
digitalWrite(anodeclm2, LOW);
digitalWrite(cathrow1, HIGH);
delay(1);
digitalWrite(anodeclm3, HIGH); //BITR1C3
digitalWrite(cathrow1, LOW);
delay(1);
digitalWrite(anodeclm3, LOW);
digitalWrite(cathrow1, HIGH);
delay(1);
digitalWrite(anodeclm2, HIGH); //BITR3C2
digitalWrite(cathrow3, LOW);
delay(1);
digitalWrite(anodeclm2, LOW);
digitalWrite(cathrow3, HIGH);
delay(1);
digitalWrite(anodeclm3, HIGH); //BITR3C3
digitalWrite(cathrow3, LOW);
delay(1);
digitalWrite(anodeclm3, LOW);
digitalWrite(cathrow3, HIGH);
delay(1);
}