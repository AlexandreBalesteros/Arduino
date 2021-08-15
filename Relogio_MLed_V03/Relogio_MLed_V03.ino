
//************************************************************************
//* Projeto de Matriz de Led - Base para Relógio com Sensor de Temperatura
//* Data: 01/01/18 Versão:1.04
//************************************************************************
//* SubMódulos:
//* RTC DS1307 - Lib DS1307.h
//* DHT11 - Sensor de Temperatura
//* Matriz de LED MAX719 - 4 módulos 8x8 Lib MaxMatrix.h de 
//* riyas-org/max7219  https://github.com/riyas-org/max7219
//************************************************************************

#include <MaxMatrix.h>    //Biblioteca de Uso Matriz de Led
#include <Wire.h>
#include "RTClib.h"
#include <dht.h>          //Biblioteca do DHT11


#include <avr/pgmspace.h>

PROGMEM const unsigned char CH[] = {
  3, 8, B00000000, B00000000, B00000000, B00000000, B00000000, // space
  1, 8, B01011111, B00000000, B00000000, B00000000, B00000000, // !
  3, 8, B00000011, B00000000, B00000011, B00000000, B00000000, // "
  5, 8, B00010100, B00111110, B00010100, B00111110, B00010100, // #
  4, 8, B00100100, B01101010, B00101011, B00010010, B00000000, // $
  5, 8, B01100011, B00010011, B00001000, B01100100, B01100011, // %
  5, 8, B00110110, B01001001, B01010110, B00100000, B01010000, // &
  1, 8, B00000011, B00000000, B00000000, B00000000, B00000000, // '
  3, 8, B00011100, B00100010, B01000001, B00000000, B00000000, // (
  3, 8, B01000001, B00100010, B00011100, B00000000, B00000000, // )
  5, 8, B00101000, B00011000, B00001110, B00011000, B00101000, // *
  5, 8, B00001000, B00001000, B00111110, B00001000, B00001000, // +
  2, 8, B10110000, B01110000, B00000000, B00000000, B00000000, // ,
  4, 8, B00001000, B00001000, B00001000, B00001000, B00000000, // -
  2, 8, B01100000, B01100000, B00000000, B00000000, B00000000, // .
  4, 8, B01100000, B00011000, B00000110, B00000001, B00000000, // /
  4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // 0
  3, 8, B01000010, B01111111, B01000000, B00000000, B00000000, // 1
  4, 8, B01100010, B01010001, B01001001, B01000110, B00000000, // 2
  4, 8, B00100010, B01000001, B01001001, B00110110, B00000000, // 3
  4, 8, B00011000, B00010100, B00010010, B01111111, B00000000, // 4
  4, 8, B00100111, B01000101, B01000101, B00111001, B00000000, // 5
  4, 8, B00111110, B01001001, B01001001, B00110000, B00000000, // 6
  4, 8, B01100001, B00010001, B00001001, B00000111, B00000000, // 7
  4, 8, B00110110, B01001001, B01001001, B00110110, B00000000, // 8
  4, 8, B00000110, B01001001, B01001001, B00111110, B00000000, // 9
  2, 8, B00100100, B00000000, B00000000, B00000000, B00000000, // :
  2, 8, B10000000, B01010000, B00000000, B00000000, B00000000, // ;
  3, 8, B00010000, B00101000, B01000100, B00000000, B00000000, // <
  3, 8, B00010100, B00010100, B00010100, B00000000, B00000000, // =
  3, 8, B01000100, B00101000, B00010000, B00000000, B00000000, // >
  4, 8, B00000010, B01011001, B00001001, B00000110, B00000000, // ?
  5, 8, B00111110, B01001001, B01010101, B01011101, B00001110, // @
  4, 8, B01111110, B00010001, B00010001, B01111110, B00000000, // A
  4, 8, B01111111, B01001001, B01001001, B00110110, B00000000, // B
  4, 8, B00111110, B01000001, B01000001, B00100010, B00000000, // C
  4, 8, B01111111, B01000001, B01000001, B00111110, B00000000, // D
  4, 8, B01111111, B01001001, B01001001, B01000001, B00000000, // E
  4, 8, B01111111, B00001001, B00001001, B00000001, B00000000, // F
  4, 8, B00111110, B01000001, B01001001, B01111010, B00000000, // G
  4, 8, B01111111, B00001000, B00001000, B01111111, B00000000, // H
  3, 8, B01000001, B01111111, B01000001, B00000000, B00000000, // I
  4, 8, B00110000, B01000000, B01000001, B00111111, B00000000, // J
  4, 8, B01111111, B00001000, B00010100, B01100011, B00000000, // K
  4, 8, B01111111, B01000000, B01000000, B01000000, B00000000, // L
  5, 8, B01111111, B00000010, B00001100, B00000010, B01111111, // M
  5, 8, B01111111, B00000100, B00001000, B00010000, B01111111, // N
  4, 8, B00111110, B01000001, B01000001, B00111110, B00000000, // O
  4, 8, B01111111, B00001001, B00001001, B00000110, B00000000, // P
  4, 8, B00111110, B01000001, B01000001, B10111110, B00000000, // Q
  4, 8, B01111111, B00001001, B00001001, B01110110, B00000000, // R
  4, 8, B01000110, B01001001, B01001001, B00110010, B00000000, // S
  5, 8, B00000001, B00000001, B01111111, B00000001, B00000001, // T
  4, 8, B00111111, B01000000, B01000000, B00111111, B00000000, // U
  5, 8, B00001111, B00110000, B01000000, B00110000, B00001111, // V
  5, 8, B00111111, B01000000, B00111000, B01000000, B00111111, // W
  5, 8, B01100011, B00010100, B00001000, B00010100, B01100011, // X
  5, 8, B00000111, B00001000, B01110000, B00001000, B00000111, // Y
  4, 8, B01100001, B01010001, B01001001, B01000111, B00000000, // Z
  2, 8, B01111111, B01000001, B00000000, B00000000, B00000000, // [
  4, 8, B00000001, B00000110, B00011000, B01100000, B00000000, // \ backslash
  2, 8, B01000001, B01111111, B00000000, B00000000, B00000000, // ]
  3, 8, B00000010, B00000001, B00000010, B00000000, B00000000, // hat
  4, 8, B01000000, B01000000, B01000000, B01000000, B00000000, // _
  2, 8, B00000001, B00000010, B00000000, B00000000, B00000000, // `
  4, 8, B00100000, B01010100, B01010100, B01111000, B00000000, // a
  4, 8, B01111111, B01000100, B01000100, B00111000, B00000000, // b
  4, 8, B00111000, B01000100, B01000100, B00101000, B00000000, // c
  4, 8, B00111000, B01000100, B01000100, B01111111, B00000000, // d
  4, 8, B00111000, B01010100, B01010100, B00011000, B00000000, // e
  3, 8, B00000100, B01111110, B00000101, B00000000, B00000000, // f
  4, 8, B10011000, B10100100, B10100100, B01111000, B00000000, // g
  4, 8, B01111111, B00000100, B00000100, B01111000, B00000000, // h
  3, 8, B01000100, B01111101, B01000000, B00000000, B00000000, // i
  4, 8, B01000000, B10000000, B10000100, B01111101, B00000000, // j
  4, 8, B01111111, B00010000, B00101000, B01000100, B00000000, // k
  3, 8, B01000001, B01111111, B01000000, B00000000, B00000000, // l
  5, 8, B01111100, B00000100, B01111100, B00000100, B01111000, // m
  4, 8, B01111100, B00000100, B00000100, B01111000, B00000000, // n
  4, 8, B00111000, B01000100, B01000100, B00111000, B00000000, // o
  4, 8, B11111100, B00100100, B00100100, B00011000, B00000000, // p
  4, 8, B00011000, B00100100, B00100100, B11111100, B00000000, // q
  4, 8, B01111100, B00001000, B00000100, B00000100, B00000000, // r
  4, 8, B01001000, B01010100, B01010100, B00100100, B00000000, // s
  3, 8, B00000100, B00111111, B01000100, B00000000, B00000000, // t
  4, 8, B00111100, B01000000, B01000000, B01111100, B00000000, // u
  5, 8, B00011100, B00100000, B01000000, B00100000, B00011100, // v
  5, 8, B00111100, B01000000, B00111100, B01000000, B00111100, // w
  5, 8, B01000100, B00101000, B00010000, B00101000, B01000100, // x
  4, 8, B10011100, B10100000, B10100000, B01111100, B00000000, // y
  3, 8, B01100100, B01010100, B01001100, B00000000, B00000000, // z
  3, 8, B00001000, B00110110, B01000001, B00000000, B00000000, // {
  1, 8, B01111111, B00000000, B00000000, B00000000, B00000000, // |
  3, 8, B01000001, B00110110, B00001000, B00000000, B00000000, // }
  4, 8, B00001000, B00000100, B00001000, B00000100, B00000000, // ~
};

RTC_DS1307 rtc;
char daysOfTheWeek[7][12] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};


// ** Variaveis Globais
int DIN = 4;   // DIN pin of MAX7219 module
int CLK = 6;   // CLK pin of MAX7219 module
int CS = 5;    // CS pin of MAX7219 module
int maxInUse = 4;

byte buffer[10];
String hora;

int i = 0; // Controle de Mensagem
bool fMensagens=false;
int temperatura;
char temp[4];
int umidade;
char umid[4];
String str;


//Modulo RTC DS1307 ligado as portas A4 e A5 do Arduino 
//DS1307 rtc(A4, A5);

//Modulo Sensor de Temperatura
#define DHTPIN A1 // pino que estamos conectado
#define DHTTYPE DHT11 // DHT 11 
dht DHT; //Inicializa o sensor
#define dht_dpin A1 //Pino DATA do Sensor ligado na porta Analogica A1

MaxMatrix m(DIN, CS, CLK, maxInUse);


//****************
//* Setup
//****************
void setup() 
{
  m.init(); // module initialize
  m.setIntensity(1); // dot matix intensity 0-15

  //Aciona o relogio
  //rtc.halt(false);
  
  //As linhas abaixo setam a data e hora do modulo
  //e podem ser comentada apos a primeira utilizacao
  // following line sets the RTC to the date & time this sketch was compiled
  //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  
  //Definicoes do pino SQW/Out
  //rtc.setSQWRate(SQW_RATE_1);
  //rtc.enableSQW(true);
  DateTime now = rtc.now();
  //Le hora inicial Variaveis relógio
  hora = (now.hour(), DEC);

 // Mensagem inicio
  m.clear(); // Clears the display
  printStringWithShift ("ABA 1.4",100);
  delay (2500);
  m.clear(); // Clears the display

  fMensagens=true; //Atualiza flag de mensagem  para mostrar após reset.

}
//*****************
//* Ciclo Principal
//*****************
void loop() 
{
    if (i==20)
        fMensagens = true;

    DateTime now = rtc.now();
        
    if (fMensagens) //Checa se hove interrupção para mostrar as mensagens
    {
        //Mensagem: Bom dia
        m.clear(); // Clears the display
        if ((hora >= "00:00") && (hora <="12:00"))
        {
          m.clear(); // Clears the display
          printStringWithShift("Bom Dia", 100); // (text, scrolling speed)
          delay (2000);
        }
        //Mensagem: Boa Tarde
        if ((hora <= "12:00") && (hora >="18:00"))
        {
          m.clear(); // Clears the display
          printStringWithShift("Boa Tarde", 100); // (text, scrolling speed)
          delay (2000);
        }
        //Mensagem: Boa Noite
        if ((hora <= "23:59") && (hora >="18:00"))
        {
          m.clear(); // Clears the display
          printStringWithShift("Boa Noite", 100); // (text, scrolling speed)
          delay (2000);
        }
        
        // Temperatura e Umidade
         DHT.read11(dht_dpin); //Lê as informações do sensor
        delay(2000);
         
        temperatura = DHT.temperature;
        //Converte Int em char
        str = String(temperatura);
        str.toCharArray(temp,4);
        
        umidade = DHT.humidity;
        //Converte Int em char
        str = String(umidade);
        str.toCharArray(umid,4);
        
        m.clear(); // Clears the display
        printStringWithShift("Temperatura.", 100); // (text, scrolling speed)
        delay(1000);
        m.clear(); // Clears the display
        printStringWithShift(temp, 100); // (text, scrolling speed)
        printStringWithShift(".C", 100); // (text, scrolling speed)
        delay(3000);
        m.clear(); // Clears the display
        printStringWithShift("Umidade", 100); // (text, scrolling speed)
        delay(1000);
        m.clear(); // Clears the display
        printStringWithShift(umid, 100); // (text, scrolling speed)
        printStringWithShift("%", 100); // (text, scrolling speed)
        delay(3000);  
        
        //Mensagem: Data
        m.clear(); // Clears the display
        printStringWithShift((now.day(), DEC), 100); //
        delay (3000);

        fMensagens = false; //Reseta Flag
        i = 0;
    } 
    
    // Atualiza a hora do display a cada minuto
    m.clear(); // Clears the display
    printStringWithShift(((now.hour(), DEC)+(now.minute(), DEC)), 10); // (text, scrolling speed)
    //Aguarda 1 minuto
    i = i+1;
    delay(60000);


}

//*****************
//* Funções Auxiliares
//*****************

// Display=the extracted characters with scrolling

void printCharWithShift(char c, int shift_speed) 
{
  if (c < 32) return;
  c -= 32;
  memcpy_P(buffer, CH + 7 * c, 7);
  m.writeSprite(32, 0, buffer);
  m.setColumn(32 + buffer[0], 0);
  
  for (int i = 0; i < buffer[0] + 1; i++)
  {
    delay(shift_speed);
    m.shiftLeft(false, false);
  }
  
}
// Extract the characters from the text string
void printStringWithShift(char* s, int shift_speed) 
{
  while (*s != 0) {
    printCharWithShift(*s, shift_speed);
    s++;
  }
}

