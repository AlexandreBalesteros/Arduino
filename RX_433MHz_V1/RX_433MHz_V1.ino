/*
**************************************************************************
  Programa para recepção de Mensagem
  Blog Eletrogate https://blog.eletrogate.com/guia-basico-dos-modulos-tx-rx-rf-433mhz
  Baseado em https://github.com/adafruit/RadioHead/tree/master/examples/ask
**************************************************************************
*/

#include <RH_ASK.h> //INCLUSAO DE BIBLIOTECA
#include <SPI.h>    //INCLUSAO DE BIBLIOTECA

RH_ASK driver; //CRIA O DRIVER PARA COMUNICAÇÃO

const int IN1 = 4; 
const int IN2 = 5; 
const int IN3 = 8; 
const int IN4 = 9; 

String str = "";       //VARIÁVEL DO TIPO STRING
int statusLed = 0;     //VARIÁVEL DO TIPO INT (CONTROLA O ESTADO ATUAL DO LED)


void setup()
{
  driver.init(); 
  pinMode(IN1, OUTPUT);    //Seta a constante como saída
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  digitalWrite(IN1, LOW);  //Inicia as saídas como nível "0"
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  Serial.begin (9600); //INICIALIZA O MONITOR SERIAL
}

void loop() 
{
  uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];
  uint8_t buflen = sizeof(buf);

  if(driver.recv(buf, &buflen))
  {
    str = "";
    int i;
    for(int i = 0; i < buflen; i++)
    {
      str += (char)buf[i];
    }
    if((str.equals("FRT")) && (statusLed == 0))
    {
      Serial.println("PARA FRT");
      //Motor A
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      //Motor B
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
      
    }
    if((str.equals("TRZ")) && (statusLed == 0))
    {
      Serial.println("PARA TRZ");
      //Motor A
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      //Motor B
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }
    if((str.equals("ESQ")) && (statusLed == 0))
    {
      Serial.println("PARA ESQ");
      //Motor A
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      //Motor B
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW);
    }
    if((str.equals("DIR")) && (statusLed == 0))
    {
      Serial.println("PARA DIR");
      //Motor A
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      //Motor B
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
    }
    if((str.equals("BTN")) && (statusLed == 0)) //SE str FOR IGUAL A "STP" E statusLed FOR IGUAL A 1, FAZ
    {
      statusLed = 0; //VARIÁVEL RECEBE 0
      Serial.println("PARA STP");
      //Motor A
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      //Motor B
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, LOW);
    }
  }  
}
