//************************************************************************
//* Projeto de Matriz de Led - Base para Relógio
//* Data: 29/04/18
//************************************************************************

/* Utilizando:
   8x8 LED Matrix MAX7219 Example 01
   by Dejan Nedelkovski, www.HowToMechatronics.com
   Based on the following library:
   GitHub | riyas-org/max7219  https://github.com/riyas-org/max7219
*/


#include <MaxMatrix.h>
int DIN = 4;   // DIN pin of MAX7219 module
int CLK = 6;   // CLK pin of MAX7219 module
int CS = 5;    // CS pin of MAX7219 module
int maxInUse = 4;

  //---------------------
  // Matriz 0 - 24,25,26,27,28,29,30,31
  // Matriz 1 - 16,17,18,19,20,21,22,23
  // Matriz 2 - 8,9,10,11,12,13,14,15
  // Matriz 3 - 0,1,2,3,4,5,6,7


  //Matriz 0 Digito 0  Coluna x Linha

MaxMatrix m(DIN, CS, CLK, maxInUse); 
char A[] = {4, 8,
            B01111110,
            B00010001,
            B00010001,
            B01111110,
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
void loop() {
 // Seting the LEDs On or Off at x,y or row,column position

//-----------------------------------------------  
  m.clear(); // Clears the display
//----------------------------------------------- 

  // Displaying the character at x,y (upper left corner of the character)  
   // Zero UM
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);

   // Um
    m.setDot(29,7,true);m.setDot(29,2,true);
    m.setDot(30,7,true);m.setDot(30,1,true);
    m.setDot(31,0,true);m.setDot(31,1,true);m.setDot(31,2,true);m.setDot(31,3,true);m.setDot(31,4,true);m.setDot(31,5,true);m.setDot(31,6,true);m.setDot(31,7,true);
    m.setDot(16,7,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
    
    delay(1000);
    m.clear();


    //Zero
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);

    //Dois
    m.setDot(29,1,true);m.setDot(29,6,true);m.setDot(29,7,true);
    m.setDot(30,0,true);m.setDot(30,5,true);m.setDot(30,7,true);
    m.setDot(31,0,true);m.setDot(31,4,true);m.setDot(31,7,true);
    m.setDot(16,1,true);m.setDot(16,2,true);m.setDot(16,3,true); m.setDot(16,7,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //Zero
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);
    //3
    m.setDot(29,0,true);m.setDot(29,6,true);
    m.setDot(30,0,true);m.setDot(30,2,true);;m.setDot(30,3,true);m.setDot(30,7,true);
    m.setDot(31,0,true);m.setDot(31,1,true);m.setDot(31,3,true); m.setDot(31,7,true);
    m.setDot(16,0,true);m.setDot(16,4,true);m.setDot(16,5,true);m.setDot(16,6,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //Zero
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);

    //4
    m.setDot(29,3,true); m.setDot(29,4,true); m.setDot(29,5,true);
    m.setDot(30,2,true); m.setDot(30,5,true);
    m.setDot(31,0,true); m.setDot(31,1,true);m.setDot(31,2,true);m.setDot(31,3,true); m.setDot(31,4,true);m.setDot(31,5,true);m.setDot(31,6,true); m.setDot(31,7,true);
    m.setDot(16,5,true);

   // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //Zero
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);

    //5
    m.setDot(29,0,true);m.setDot(29,1,true);m.setDot(29,2,true);m.setDot(29,3,true);m.setDot(29,6,true);
    m.setDot(30,0,true);m.setDot(30,3,true);m.setDot(30,7,true);
    m.setDot(31,0,true);m.setDot(31,3,true);m.setDot(31,7,true);
    m.setDot(16,0,true);m.setDot(16,4,true);m.setDot(16,5,true);m.setDot(16,6,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //Zero
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);

    //6
    m.setDot(29,1,true);m.setDot(29,2,true);m.setDot(29,3,true);m.setDot(29,4,true);m.setDot(29,5,true);m.setDot(29,6,true);
    m.setDot(30,0,true);m.setDot(30,3,true);m.setDot(30,7,true);
    m.setDot(31,0,true);m.setDot(31,3,true);m.setDot(31,7,true);
    m.setDot(16,0,true);m.setDot(16,4,true);m.setDot(16,5,true);m.setDot(16,6,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //Zero
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);

    //7
    m.setDot(29,0,true);
    m.setDot(29,0,true);
    m.setDot(30,0,true);m.setDot(30,3,true);m.setDot(30,4,true);m.setDot(30,3,true);m.setDot(30,5,true);m.setDot(30,6,true);m.setDot(30,7,true); 
    m.setDot(31,0,true);m.setDot(31,2,true);
    m.setDot(16,0,true);m.setDot(16,1,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //Zero
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);

    //8
    m.setDot(29,1,true);m.setDot(29,2,true);m.setDot(29,4,true);m.setDot(29,5,true);m.setDot(29,6,true);
    m.setDot(30,0,true);m.setDot(30,3,true);m.setDot(30,7,true);
    m.setDot(31,0,true);m.setDot(31,3,true);m.setDot(31,7,true);  
    m.setDot(16,1,true);m.setDot(16,2,true);m.setDot(16,4,true);m.setDot(16,5,true);m.setDot(16,6,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //Zero
    m.setDot(24,1,true);m.setDot(24,2,true);m.setDot(24,3,true);m.setDot(24,4,true); m.setDot(24,5,true); m.setDot(24,6,true);
    m.setDot(25,0,true);m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,7,true);
    m.setDot(27,1,true);m.setDot(27,2,true);m.setDot(27,3,true); m.setDot(27,4,true); m.setDot(27,5,true); m.setDot(27,6,true);

    //9
    m.setDot(29,1,true);m.setDot(29,2,true);m.setDot(29,3,true);m.setDot(29,6,true);
    m.setDot(30,0,true);m.setDot(30,4,true);m.setDot(30,7,true);
    m.setDot(31,0,true);m.setDot(31,4,true);m.setDot(31,7,true); 
    m.setDot(16,1,true);m.setDot(16,2,true);m.setDot(16,3,true);m.setDot(16,4,true);m.setDot(16,5,true);m.setDot(16,6,true);

   // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();
   
    //****************************************************************************
    //1
    m.setDot(24,2,true); m.setDot(24,7,true);
    m.setDot(25,1,true); m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,1,true); m.setDot(26,2,true); m.setDot(26,3,true);m.setDot(26,4,true);m.setDot(26,5,true);m.setDot(26,6,true); m.setDot(26,7,true);
    m.setDot(27,7,true);
   // Zero
    m.setDot(29,1,true);m.setDot(29,2,true);m.setDot(29,3,true);m.setDot(29,4,true); m.setDot(29,5,true); m.setDot(29,6,true);
    m.setDot(30,0,true);m.setDot(30,7,true);
    m.setDot(31,0,true);m.setDot(31,7,true);
    m.setDot(16,1,true);m.setDot(16,2,true);m.setDot(16,3,true); m.setDot(16,4,true); m.setDot(16,5,true); m.setDot(16,6,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //1
    m.setDot(24,2,true); m.setDot(24,7,true);
    m.setDot(25,1,true); m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,1,true); m.setDot(26,2,true); m.setDot(26,3,true);m.setDot(26,4,true);m.setDot(26,5,true);m.setDot(26,6,true); m.setDot(26,7,true);
    m.setDot(27,7,true);
    // Um
    m.setDot(29,7,true);m.setDot(29,2,true);
    m.setDot(30,7,true);m.setDot(30,1,true);
    m.setDot(31,0,true);m.setDot(31,1,true);m.setDot(31,2,true);m.setDot(31,3,true);m.setDot(31,4,true);m.setDot(31,5,true);m.setDot(31,6,true);m.setDot(31,7,true);
    m.setDot(16,7,true);

   // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();

    //1
    m.setDot(24,2,true); m.setDot(24,7,true);
    m.setDot(25,1,true); m.setDot(25,7,true);
    m.setDot(26,0,true);m.setDot(26,1,true); m.setDot(26,2,true); m.setDot(26,3,true);m.setDot(26,4,true);m.setDot(26,5,true);m.setDot(26,6,true); m.setDot(26,7,true);
    m.setDot(27,7,true);
    //Dois
    m.setDot(29,1,true);m.setDot(29,6,true);m.setDot(29,7,true);
    m.setDot(30,0,true);m.setDot(30,5,true);m.setDot(30,7,true);
    m.setDot(31,0,true);m.setDot(31,4,true);m.setDot(31,7,true);
    m.setDot(16,1,true);m.setDot(16,2,true);m.setDot(16,3,true); m.setDot(16,7,true);

    // Ponto Ponto
    m.setDot(18,2,true);m.setDot(18,4,true);

    //Zero
    m.setDot(20,1,true);m.setDot(20,2,true);m.setDot(20,3,true);m.setDot(20,4,true); m.setDot(20,5,true); m.setDot(20,6,true);
    m.setDot(21,0,true);m.setDot(21,7,true);
    m.setDot(22,0,true);m.setDot(22,7,true);
    m.setDot(23,1,true);m.setDot(23,2,true);m.setDot(23,3,true); m.setDot(23,4,true); m.setDot(23,5,true); m.setDot(23,6,true);

    //Zero
    m.setDot(9,1,true);m.setDot(9,2,true);m.setDot(9,3,true);m.setDot(9,4,true); m.setDot(9,5,true); m.setDot(9,6,true);
    m.setDot(10,0,true);m.setDot(10,7,true);
    m.setDot(11,0,true);m.setDot(11,7,true);
    m.setDot(12,1,true);m.setDot(12,2,true);m.setDot(12,3,true); m.setDot(12,4,true); m.setDot(12,5,true); m.setDot(12,6,true);
   
    delay(1000);
    m.clear();
   
  
}
