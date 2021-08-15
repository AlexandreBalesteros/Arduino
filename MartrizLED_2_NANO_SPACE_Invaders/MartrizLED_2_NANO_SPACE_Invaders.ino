//************************************************************************
//* Projeto de Matriz de Led - SPACE INVADERS
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
  m.setIntensity(2); // initial led matrix intensity, 0-15
}
void loop() 
{
  Alien1();
  delay (1500); 
  m.clear(); // Clears the display
  Alien2();
  delay (1500); 
  m.clear(); // Clears the display
  Alien3();
  delay (1500); 
  m.clear(); // Clears the display
  Alien4();
  delay (1500); 
  m.clear(); // Clears the display
  coracao();
  delay (1500); 
  m.clear(); // Clears the display
}


// ************
// * Alien 1  *
// ************
void Alien1 (void)
{
 // Linha 0
  m.setDot(0,0,false);
  m.setDot(0,1,true);
  m.setDot(0,2,false);
  m.setDot(0,3,false);
  m.setDot(0,4,false);
  m.setDot(0,5,false);
  m.setDot(0,6,true);
  m.setDot(0,7,false);
  
 // Linha 2
  m.setDot(1,7,false);
  m.setDot(1,6,true);
  m.setDot(1,5,false);
  m.setDot(1,4,true);
  m.setDot(1,3,true);
  m.setDot(1,2,false);
  m.setDot(1,1,true);
  m.setDot(1,0,false);
  
 // Linha 3
  m.setDot(2,0,false);
  m.setDot(2,1,false);
  m.setDot(2,2,true);
  m.setDot(2,3,false);
  m.setDot(2,4,false);
  m.setDot(2,5,true);
  m.setDot(2,6,false);
  m.setDot(2,7,false);
 
 // Linha 4
  m.setDot(3,7,true);  
  m.setDot(3,6,true);  
  m.setDot(3,5,true);  
  m.setDot(3,4,true);  
  m.setDot(3,3,true);
  m.setDot(3,2,true);
  m.setDot(3,1,true);
  m.setDot(3,0,true);
 
 // Linha 5 
  m.setDot(4,0,true);
  m.setDot(4,1,true);  
  m.setDot(4,2,false);  
  m.setDot(4,3,true);  
  m.setDot(4,4,true);  
  m.setDot(4,5,false);  
  m.setDot(4,6,true);
  m.setDot(4,7,true);

 // Linha 6
  m.setDot(5,7,false); 
  m.setDot(5,6,true); 
  m.setDot(5,5,true); 
  m.setDot(5,4,true); 
  m.setDot(5,3,true);
  m.setDot(5,2,true); 
  m.setDot(5,1,true);
  m.setDot(5,0,false);

 // Linha 7
  m.setDot(6,0,false);
  m.setDot(6,1,false);
  m.setDot(6,2,true);
  m.setDot(6,3,true);
  m.setDot(6,4,true);
  m.setDot(6,5,true);
  m.setDot(6,6,false);
  m.setDot(6,7,false);

 // Linha 8
  m.setDot(7,7,false);
  m.setDot(7,6,false);
  m.setDot(7,5,false);
  m.setDot(7,4,true);
  m.setDot(7,3,true);
  m.setDot(7,2,false);
  m.setDot(7,1,false);
  m.setDot(7,0,false);

}


// ************
// * Alien 2  *
// ************
 void Alien2(void)
 {
 // Linha 0
  m.setDot(0,0,false);
  m.setDot(0,1,false);
  m.setDot(0,2,true);
  m.setDot(0,3,false);
  m.setDot(0,4,false);
  m.setDot(0,5,true);
  m.setDot(0,6,false);
  m.setDot(0,7,false);
  
 // Linha 2
  m.setDot(1,7,true);
  m.setDot(1,6,false);
  m.setDot(1,5,true);
  m.setDot(1,4,false);
  m.setDot(1,3,false);
  m.setDot(1,2,true);
  m.setDot(1,1,false);
  m.setDot(1,0,true);
  
 // Linha 3
  m.setDot(2,0,true);
  m.setDot(2,1,true);
  m.setDot(2,2,true);
  m.setDot(2,3,true);
  m.setDot(2,4,true);
  m.setDot(2,5,true);
  m.setDot(2,6,true);
  m.setDot(2,7,true);
 
 // Linha 4
  m.setDot(3,7,true);  
  m.setDot(3,6,true);  
  m.setDot(3,5,true);  
  m.setDot(3,4,true);  
  m.setDot(3,3,true);
  m.setDot(3,2,true);
  m.setDot(3,1,true);
  m.setDot(3,0,true);
 
 // Linha 5 
  m.setDot(4,0,true);
  m.setDot(4,1,true);  
  m.setDot(4,2,false);  
  m.setDot(4,3,true);  
  m.setDot(4,4,true);  
  m.setDot(4,5,false);  
  m.setDot(4,6,true);
  m.setDot(4,7,true);

 // Linha 6
  m.setDot(5,7,false); 
  m.setDot(5,6,true); 
  m.setDot(5,5,true); 
  m.setDot(5,4,true); 
  m.setDot(5,3,true);
  m.setDot(5,2,true); 
  m.setDot(5,1,true);
  m.setDot(5,0,false);

 // Linha 7
  m.setDot(6,0,false);
  m.setDot(6,1,false);
  m.setDot(6,2,true);
  m.setDot(6,3,false);
  m.setDot(6,4,false);
  m.setDot(6,5,true);
  m.setDot(6,6,false);
  m.setDot(6,7,false);

 // Linha 8
  m.setDot(7,7,false);
  m.setDot(7,6,false);
  m.setDot(7,5,true);
  m.setDot(7,4,false);
  m.setDot(7,3,false);
  m.setDot(7,2,true);
  m.setDot(7,1,false);
  m.setDot(7,0,false);

}
 
// ************
// * Alien 3  *
// ************

void Alien3(void)
{
 // Linha 0
  m.setDot(0,0,false);
  m.setDot(0,1,true);
  m.setDot(0,2,false);
  m.setDot(0,3,false);
  m.setDot(0,4,false);
  m.setDot(0,5,false);
  m.setDot(0,6,true);
  m.setDot(0,7,false);
  
 // Linha 2
  m.setDot(1,7,false);
  m.setDot(1,6,false);
  m.setDot(1,5,true);
  m.setDot(1,4,false);
  m.setDot(1,3,false);
  m.setDot(1,2,true);
  m.setDot(1,1,false);
  m.setDot(1,0,false);
  
 // Linha 3
  m.setDot(2,0,false);
  m.setDot(2,1,true);
  m.setDot(2,2,true);
  m.setDot(2,3,true);
  m.setDot(2,4,true);
  m.setDot(2,5,true);
  m.setDot(2,6,true);
  m.setDot(2,7,false);
 
 // Linha 4
  m.setDot(3,7,true);  
  m.setDot(3,6,true);  
  m.setDot(3,5,true);  
  m.setDot(3,4,true);  
  m.setDot(3,3,true);
  m.setDot(3,2,true);
  m.setDot(3,1,true);
  m.setDot(3,0,true);
 
 // Linha 5 
  m.setDot(4,0,true);
  m.setDot(4,1,true);  
  m.setDot(4,2,false);  
  m.setDot(4,3,true);  
  m.setDot(4,4,true);  
  m.setDot(4,5,false);  
  m.setDot(4,6,true);
  m.setDot(4,7,true);

 // Linha 6
  m.setDot(5,7,true); 
  m.setDot(5,6,true); 
  m.setDot(5,5,true); 
  m.setDot(5,4,true); 
  m.setDot(5,3,true);
  m.setDot(5,2,true); 
  m.setDot(5,1,true);
  m.setDot(5,0,true);

 // Linha 7
  m.setDot(6,0,true);
  m.setDot(6,1,false);
  m.setDot(6,2,true);
  m.setDot(6,3,false);
  m.setDot(6,4,false);
  m.setDot(6,5,true);
  m.setDot(6,6,false);
  m.setDot(6,7,true);

 // Linha 8
  m.setDot(7,7,false);
  m.setDot(7,6,false);
  m.setDot(7,5,true);
  m.setDot(7,4,false);
  m.setDot(7,3,false);
  m.setDot(7,2,true);
  m.setDot(7,1,false);
  m.setDot(7,0,false);
}

// ***********
// * Alien 4 *
// ***********
void Alien4(void)
{
 // Linha 0
  m.setDot(0,0,true);
  m.setDot(0,1,false);
  m.setDot(0,2,true);
  m.setDot(0,3,false);
  m.setDot(0,4,false);
  m.setDot(0,5,true);
  m.setDot(0,6,false);
  m.setDot(0,7,true);
  
 // Linha 2
  m.setDot(1,7,false);
  m.setDot(1,6,true);
  m.setDot(1,5,false);
  m.setDot(1,4,true);
  m.setDot(1,3,true);
  m.setDot(1,2,false);
  m.setDot(1,1,true);
  m.setDot(1,0,false);
  
 // Linha 3
  m.setDot(2,0,false);
  m.setDot(2,1,false);
  m.setDot(2,2,true);
  m.setDot(2,3,false);
  m.setDot(2,4,false);
  m.setDot(2,5,true);
  m.setDot(2,6,false);
  m.setDot(2,7,false);
 
 // Linha 4
  m.setDot(3,7,true);  
  m.setDot(3,6,true);  
  m.setDot(3,5,true);  
  m.setDot(3,4,true);  
  m.setDot(3,3,true);
  m.setDot(3,2,true);
  m.setDot(3,1,true);
  m.setDot(3,0,true);
 
 // Linha 5 
  m.setDot(4,0,true);
  m.setDot(4,1,true);  
  m.setDot(4,2,false);  
  m.setDot(4,3,true);  
  m.setDot(4,4,true);  
  m.setDot(4,5,false);  
  m.setDot(4,6,true);
  m.setDot(4,7,true);

 // Linha 6
  m.setDot(5,7,false); 
  m.setDot(5,6,true); 
  m.setDot(5,5,true); 
  m.setDot(5,4,true); 
  m.setDot(5,3,true);
  m.setDot(5,2,true); 
  m.setDot(5,1,true);
  m.setDot(5,0,false);

 // Linha 7
  m.setDot(6,0,false);
  m.setDot(6,1,false);
  m.setDot(6,2,true);
  m.setDot(6,3,true);
  m.setDot(6,4,true);
  m.setDot(6,5,true);
  m.setDot(6,6,false);
  m.setDot(6,7,false);

 // Linha 8
  m.setDot(7,7,false);
  m.setDot(7,6,false);
  m.setDot(7,5,false);
  m.setDot(7,4,true);
  m.setDot(7,3,true);
  m.setDot(7,2,false);
  m.setDot(7,1,false);
  m.setDot(7,0,false);
}

// ***********
// * Coração *
// ***********
void coracao(void)
{
 // Linha 0
  m.setDot(0,0,false);
  m.setDot(0,1,false);
  m.setDot(0,2,false);
  m.setDot(0,3,false);
  m.setDot(0,4,false);
  m.setDot(0,5,false);
  m.setDot(0,6,false);
  m.setDot(0,7,false);
  
 // Linha 2
  m.setDot(1,7,false);
  m.setDot(1,6,false);
  m.setDot(1,5,false);
  m.setDot(1,4,true);
  m.setDot(1,3,true);
  m.setDot(1,2,false);
  m.setDot(1,1,false);
  m.setDot(1,0,false);
  
 // Linha 3
  m.setDot(2,0,false);
  m.setDot(2,1,true);
  m.setDot(2,2,true);
  m.setDot(2,3,true);
  m.setDot(2,4,true);
  m.setDot(2,5,true);
  m.setDot(2,6,true);
  m.setDot(2,7,false);
 
 // Linha 4
  m.setDot(3,7,true);  
  m.setDot(3,6,true);  
  m.setDot(3,5,true);  
  m.setDot(3,4,true);  
  m.setDot(3,3,true);
  m.setDot(3,2,true);
  m.setDot(3,1,true);
  m.setDot(3,0,true);
 
 // Linha 5 
  m.setDot(4,0,true);
  m.setDot(4,1,true);  
  m.setDot(4,2,true);  
  m.setDot(4,3,true);  
  m.setDot(4,4,true);  
  m.setDot(4,5,true);  
  m.setDot(4,6,true);
  m.setDot(4,7,true);

 // Linha 6
  m.setDot(5,7,true); 
  m.setDot(5,6,true); 
  m.setDot(5,5,true); 
  m.setDot(5,4,true); 
  m.setDot(5,3,true);
  m.setDot(5,2,true); 
  m.setDot(5,1,true);
  m.setDot(5,0,true);

 // Linha 7
  m.setDot(6,0,false);
  m.setDot(6,1,true);
  m.setDot(6,2,true);
  m.setDot(6,3,false);
  m.setDot(6,4,false);
  m.setDot(6,5,true);
  m.setDot(6,6,true);
  m.setDot(6,7,false);

 // Linha 8
  m.setDot(7,7,false);
  m.setDot(7,6,false);
  m.setDot(7,5,false);
  m.setDot(7,4,false);
  m.setDot(7,3,false);
  m.setDot(7,2,false);
  m.setDot(7,1,false);
  m.setDot(7,0,false);
}














