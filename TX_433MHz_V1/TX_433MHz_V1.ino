//*********************************************************************************************
// Transmissor Com leitor de Joystick
// V1.00 - 25/12/19 - Placa Arduino Mega
//
//********************************************************************************************+



#include <RH_ASK.h> //INCLUSÃO DE BIBLIOTECA
#include <SPI.h> //INCLUSÃO DE BIBLIOTECA

RH_ASK driver; //CRIA CMD
//const int pinoBotao = 2; //PINO DIGITAL UTILIZADO PELO PUSH BUTTON

uint8_t count = 1;                                                // contador
uint8_t JoySTK = 0;                                               // controle de Direção
                                                                  // 1 = Cima
                                                                  // 2 = Baixo
                                                                  // 3 = Esquerda
                                                                  // 4 = Direita
                                                                  // 5 = Botao
uint8_t data[] = "Mensagem de teste";                             // mensagem a ser enviada
uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];                              // buffer da mensagem

//Controle do Joystick
int eixo_X = A0;                                                  //PINO REFERENTE A LIGAÇÃO DO EIXO X
int eixo_Y = A1;                                                  //PINO REFERENTE A LIGAÇÃO DO EIXO Y
int botao = 2;                                                    //PINO REFERENTE A LIGAÇÃO NO PINO KEY (EIXO Z)



void setup ()
{

   pinMode (botao, INPUT_PULLUP);                                 //DEFINE A PORTA COMO ENTRADA / "_PULLUP" É PARA ATIVAR O RESISTOR INTERNO
                                                                  //DO ARDUINO PARA GARANTIR QUE NÃO EXISTA FLUTUAÇÃO ENTRE 0 (LOW) E 1 (HIGH
   driver.init(); //INICIALIZA A COMUNICAÇÃO RF DO DRIVER
   //pinMode(pinoBotao, INPUT_PULLUP); //DEFINE O PINO COMO ENTRADA / "_PULLUP" É PARA ATIVAR O RESISTOR INTERNO
   Serial.begin (9600); //INICIALIZA O MONITOR SERIAL 
}

void loop ()
{
  const char *msg = "STP"; //VARIÁVEL RECEBE O VALOR DEFAULT para DeadZone

 //Tratamento Joystick
  if((analogRead(eixo_X)) == 0){ //SE LEITURA FOR IGUAL A 0, FAZ
        msg = "DIR"; //Vai para Frente
        Serial.println("PARA DIR"); //IMPRIME O TEXTO NO MONITOR SERIAL
    }
    else{
          if((analogRead(eixo_X)) == 1023){ //SE LEITURA FOR IGUAL A 1023, FAZ
              msg = "ESQ"; //Vai para Baixo
              Serial.println("PARA ESQ"); //IMPRIME O TEXTO NO MONITOR SERIAL
          }
          else{
                if((analogRead(eixo_Y)) == 0){ //SE LEITURA FOR IGUAL A 0, FAZ
                  msg = "FRT"; //Vai para Esq
                  Serial.println("PARA FRT"); //IMPRIME O TEXTO NO MONITOR SERIAL
                }
                else{
                      if((analogRead(eixo_Y)) == 1023){ //SE LEITURA FOR IGUAL A 1023, FAZ
                          msg = "TRZ"; //Vai para DIR
                          Serial.println("PARA TRZ"); //IMPRIME O TEXTO NO MONITOR SERIAL
                      }
                      else{
                            if(digitalRead(botao) == LOW){ //SE LEITURA FOR IGUAL A HIGH, FAZ
                               msg = "BTN"; //Botão Pressionado
                               Serial.println("BOTAO"); //IMPRIME O TEXTO NO MONITOR SERIAL
                            }  
                      }
                }
          }
    }

 
//Transmissão
//  if(digitalRead(pinoBotao) == LOW)
//  {
    driver.send((uint8_t *)msg, strlen(msg));
    driver.waitPacketSent(); //AGUARDA O ENVIO DAS INFORMAÇÕES
    delay(200); //INTERVALO DE 200 MILISSEGUNDOS
//  }
}
