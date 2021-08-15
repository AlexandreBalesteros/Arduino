//************************************************************************
//* Projeto de Matriz de Led - 
//* Data: 23/06/2019
//************************************************************************

/*
   8x8 LED Matrix MAX7219 Example 01
   by Dejan Nedelkovski, www.HowToMechatronics.com
   Based on the following library:
   GitHub | riyas-org/max7219  https://github.com/riyas-org/max7219
*/
#include <MaxMatrix.h>
int DIN = 10;   // DIN pin of MAX7219 module
int CLK = 12;   // CLK pin of MAX7219 module
int CS =  11;    // CS pin of MAX7219 module
int maxInUse = 1;

  //---------------------
  // Matriz 0 - 24,25,26,27,28,29,30,31
  // Matriz 1 - 16,17,18,19,20,21,22,23
  // Matriz 2 - 8,9,10,11,12,13,14,15
  // Matriz 3 - 0,1,2,3,4,5,6,7


  //Matriz 0 Digito 0  Coluna x Linha
 /*
  M00  
    //Inicio
    m.setDot(24,1,true);
    m.setDot(24,2,true);
    m.setDot(24,3,true);
    m.setDot(24,4,true);
    m.setDot(24,5,true);
    m.setDot(24,6,true);
   // Base
    m.setDot(25,0,true);
    m.setDot(26,0,true);
    m.setDot(27,0,true);
   // Top
    m.setDot(25,7,true);
    m.setDot(26,7,true);
    m.setDot(27,7,true);
   // Fim
    m.setDot(28,1,true);
    m.setDot(28,2,true);
    m.setDot(28,3,true);
    m.setDot(28,4,true);
    m.setDot(28,5,true);
    m.setDot(28,6,true);
  */

 
MaxMatrix m(DIN, CS, CLK, maxInUse); 
char A[] = {4, 8,
            B01111110,
            B00010001,
            B00010001,
            B01111110,
           };

char Um[] = {4, 8,
            B10000100,
            B10000010,
            B11111111,
            B10000000,
           };


           
char B[] = {4, 8,
            B01111111,
            B01001001,
            B01001001,
            B00110110,
           };
char smile01[] = {8, 8,
                  B00111100,
                  B01000010,
                  B10010101,
                  B10100001,
                  B10100001,
                  B10010101,
                  B01000010,
                  B00111100
                 };
char smile02[] = {8, 8,
                  B00111100,
                  B01000010,
                  B10010101,
                  B10010001,
                  B10010001,
                  B10010101,
                  B01000010,
                  B00111100
                 };
char smile03[] = {8, 8,
                  B00111100,
                  B01000010,
                  B10100101,
                  B10010001,
                  B10010001,
                  B10100101,
                  B01000010,
                  B00111100
                 };


                 
void setup() {
  m.init(); // MAX7219 initialization
  m.setIntensity(8); // initial led matrix intensity, 0-15
}
void loop() {
  // Seting the LEDs On or Off at x,y or row,column position

  m.setDot(0,0,true);
  delay(50);
  m.setDot(0,1,true);
  delay(50);
  m.setDot(0,2,true);
  delay(50);
  m.setDot(0,3,true);
  delay(50);
  m.setDot(0,4,true);
  delay(50);
  m.setDot(0,5,true);
  delay(50);
  m.setDot(0,6,true);
  delay(50);
  m.setDot(0,7,true);
  delay(50);
 
  m.setDot(1,7,true);
  delay(50);
  m.setDot(1,6,true);
  delay(50);
  m.setDot(1,5,true);
  delay(50);
  m.setDot(1,4,true);
  delay(50);
  m.setDot(1,3,true);
  delay(50);
  m.setDot(1,2,true);
  delay(50);
  m.setDot(1,1,true);
  delay(50);
  m.setDot(1,0,true);
  delay(50); 

  m.setDot(2,0,true);
  delay(50);
  m.setDot(2,1,true);
  delay(50);
  m.setDot(2,2,true);
  delay(50);
  m.setDot(2,3,true);
  delay(50);
  m.setDot(2,4,true);
  delay(50);
  m.setDot(2,5,true);
  delay(50);
  m.setDot(2,6,true);
  delay(50);
  m.setDot(2,7,true);
  delay(50);

  m.setDot(3,7,true);
  delay(50);
  m.setDot(3,6,true);
  delay(50);
  m.setDot(3,5,true);
  delay(50);
  m.setDot(3,4,true);
  delay(50);
  m.setDot(3,3,true);
  delay(50);
  m.setDot(3,2,true);
  delay(50);
  m.setDot(3,1,true);
  delay(50);
  m.setDot(3,0,true);
  delay(50);
 
  m.setDot(4,0,true);
  delay(50);
  m.setDot(4,1,true);
  delay(50);
  m.setDot(4,2,true);
  delay(50);
  m.setDot(4,3,true);
  delay(50);
  m.setDot(4,4,true);
  delay(50);
  m.setDot(4,5,true);
  delay(50);
  m.setDot(4,6,true);
  delay(50);
  m.setDot(4,7,true);
  delay(50);

  m.setDot(5,7,true);
  delay(50);
  m.setDot(5,6,true);
  delay(50);
  m.setDot(5,5,true);
  delay(50);
  m.setDot(5,4,true);
  delay(50);
  m.setDot(5,3,true);
  delay(50);
  m.setDot(5,2,true);
  delay(50);
  m.setDot(5,1,true);
  delay(50);
  m.setDot(5,0,true);
  delay(50); 

  m.setDot(6,0,true);
  delay(50);
  m.setDot(6,1,true);
  delay(50);
  m.setDot(6,2,true);
  delay(50);
  m.setDot(6,3,true);
  delay(50);
  m.setDot(6,4,true);
  delay(50);
  m.setDot(6,5,true);
  delay(50);
  m.setDot(6,6,true);
  delay(50);
  m.setDot(6,7,true);
  delay(50);

  m.setDot(7,7,true);
  delay(50);
  m.setDot(7,6,true);
  delay(50);
  m.setDot(7,5,true);
  delay(50);
  m.setDot(7,4,true);
  delay(50);
  m.setDot(7,3,true);
  delay(50);
  m.setDot(7,2,true);
  delay(50);
  m.setDot(7,1,true);
  delay(50);
  m.setDot(7,0,true);
  delay(50); 

//-----------------------------------------------  
  m.clear(); // Clears the display
//----------------------------------------------- 

  m.clear();
  // Displaying the character at x,y (upper left corner of the character)  
   // Zero
    m.setDot(24,1,true);
    m.setDot(24,2,true);
    m.setDot(24,3,true);
    m.setDot(24,4,true);
    m.setDot(24,5,true);
    m.setDot(24,6,true);
   // Base
    m.setDot(25,0,true);
    m.setDot(26,0,true);
    m.setDot(27,0,true);
   // Top
    m.setDot(25,7,true);
    m.setDot(26,7,true);
    m.setDot(27,7,true);
   // Fim
    m.setDot(28,1,true);
    m.setDot(28,2,true);
    m.setDot(28,3,true);
    m.setDot(28,4,true);
    m.setDot(28,5,true);
    m.setDot(28,6,true);

  delay(1000);
   m.clear();

   //1
    m.setDot(26,1,true);
    m.setDot(26,2,true);
    m.setDot(26,3,true);
    m.setDot(26,4,true);
    m.setDot(26,5,true);
    m.setDot(26,6,true);
    m.setDot(26,7,true);
   // Base
    m.setDot(24,7,true);
    m.setDot(25,7,true);
    m.setDot(26,7,true);
    m.setDot(27,7,true);
   // Top
    m.setDot(25,1,true);
    m.setDot(26,0,true);
    m.setDot(24,2,true);
   //
  delay(1000); 
  m.clear();  

   //2
    m.setDot(24,1,true);
    m.setDot(25,0,true);
    m.setDot(26,0,true);
    m.setDot(27,1,true);
    m.setDot(27,2,true);
    m.setDot(27,3,true);
    m.setDot(26,4,true);
    m.setDot(25,5,true);
    m.setDot(24,6,true);
   // Base
    m.setDot(24,7,true);
    m.setDot(25,7,true);
    m.setDot(26,7,true);
    m.setDot(27,7,true);
   //
  delay(2000);  

 
  m.clear();
}
