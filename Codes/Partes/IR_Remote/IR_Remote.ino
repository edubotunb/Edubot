/* Autor(es): 
   Source: Exemplo de envio de código pelo LED infravermelho do Sparki
   Data: data do teste
  
   Objetivo: Testar o funcionamento do LED infravermelho do Sparki
   para enviar códigos para outro Sparki. O segundo Sparki deve
   utilizar o código de controle remoto para receber os comandos
   enviados e executar ações como movimentação, controle da garra,
   buzzer, servo motor e LED RGB.
  
   Para realizar o teste, são necessários dois Sparkis:
   um deve executar este código, responsável por enviar os comandos,
   e o outro deve executar o código "IR Remote", responsável por
   receber os comandos. Os dois Sparkis devem ser posicionados
   um de frente para o outro.

   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   code: armazena o código numérico que será enviado pelo LED
         infravermelho através do comando sparki.sendIR().
*/

/* Execução
   Este programa utiliza o LED infravermelho do Sparki para enviar
   códigos para outro Sparki.

   Primeiro, a variável "code" recebe o valor 70. Esse código é
   enviado através do comando sparki.sendIR(code). O programa
   aguarda 1 segundo e envia o código 64.

   Em seguida, o código 21 é enviado e o programa aguarda mais
   1 segundo.

   Os códigos enviados correspondem a comandos definidos no
   programa "IR Remote", que deve estar instalado no segundo
   Sparki.

   No Sparki receptor, o comando sparki.readIR() lê o código
   recebido pelo sensor infravermelho. A estrutura switch verifica
   qual código foi recebido e executa o comando correspondente.

   Código 70:
     Move o Sparki receptor para frente.

   Código 21:
     Move o Sparki receptor para trás.

   Código 67 ou 71:
     Move o Sparki receptor para a direita.

   Código 68 ou 69:
     Move o Sparki receptor para a esquerda.

   Código 64:
     Para o movimento do Sparki e também para o movimento da garra.

   Código 9:
     Abre a garra.

   Código 7:
     Fecha a garra.

   Código 74:
     Aciona o buzzer.

   Código 90:
     Move o servo para a esquerda.

   Código 28:
     Move o servo para o centro.

   Código 8:
     Move o servo para a direita.

   Código 25:
     Desliga o LED RGB.

   Código 12:
     Acende o LED RGB na cor vermelha.

   Código 24:
     Acende o LED RGB na cor verde.

   Código 94:
     Acende o LED RGB na cor azul.

   Após os códigos 70, 64 e 21 serem enviados, o programa aguarda 1 segundo
   antes de reiniciar o processo.
*/

/*
////////////////////////////////////////////////////////////////////////
//                     CÓDIGO DO REMOTE                               //
////////////////////////////////////////////////////////////////////////

   Este código deve ser carregado no segundo Sparki, que funcionará
   como receptor dos comandos enviados pelo primeiro Sparki.

   O comando sparki.readIR() realiza a leitura do código recebido
   pelo sensor infravermelho.

   Quando um código válido é recebido, ele é exibido no LCD através
   dos comandos sparki.print() e sparki.println().

   A estrutura switch(code) verifica o código recebido e executa
   uma ação específica.

   COMANDOS DE MOVIMENTO:

   case 70:
     sparki.moveForward();
     Faz o Sparki receptor se mover para frente.

   case 21:
     sparki.moveBackward();
     Faz o Sparki receptor se mover para trás.

   case 67 e case 71:
     sparki.moveRight();
     Faz o Sparki receptor se mover para a direita.

   case 68 e case 69:
     sparki.moveLeft();
     Faz o Sparki receptor se mover para a esquerda.

   case 64:
     sparki.moveStop();
     Para o movimento das rodas.

     sparki.gripperStop();
     Para o movimento da garra.

   COMANDOS DA GARRA:

   case 9:
     sparki.gripperOpen();
     Abre a garra do Sparki.

   case 7:
     sparki.gripperClose();
     Fecha a garra do Sparki.

   BUZZER:

   case 74:
     sparki.beep();
     Faz o Sparki emitir um sinal sonoro.

   SERVO MOTOR:

   case 90:
     sparki.servo(SERVO_LEFT);
     Move o servo para a posição esquerda.

   case 28:
     sparki.servo(SERVO_CENTER);
     Move o servo para a posição central.

   case 8:
     sparki.servo(SERVO_RIGHT);
     Move o servo para a posição direita.

   LED RGB:

   case 25:
     sparki.RGB(RGB_OFF);
     Desliga o LED RGB.

   case 12:
     sparki.RGB(RGB_RED);
     Acende o LED RGB na cor vermelha.

   case 24:
     sparki.RGB(RGB_GREEN);
     Acende o LED RGB na cor verde.

   case 94:
     sparki.RGB(RGB_BLUE);
     Acende o LED RGB na cor azul.

   default:
     Não realiza nenhuma ação caso o código recebido não
     corresponda a nenhum dos códigos definidos.

   O comando sparki.updateLCD() atualiza o LCD do Sparki
   receptor para exibir as informações recebidas.

////////////////////////////////////////////////////////////////////////
//                         CÓDIGO COMPLETO                            //
////////////////////////////////////////////////////////////////////////

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup() 
{ 
  sparki.clearLCD(); // Limpa o LCD
}

void loop() 
{  
  int code = sparki.readIR(); // Lê o código recebido pelo controle remoto

  if(code != -1)
  {
    sparki.print("Received code: "); // Exibe uma mensagem no LCD
    sparki.println(code); // Exibe o código recebido
  }

  switch(code)
  {
    
  // Botões de movimento
  case 70: 
    sparki.moveForward(); // Move o Sparki para frente
    break;

  case 21: 
    sparki.moveBackward(); // Move o Sparki para trás
    break;

  case 67: 
  case 71: 
    sparki.moveRight(); // Move o Sparki para a direita
    break;

  case 68:
  case 69: 
    sparki.moveLeft(); // Move o Sparki para a esquerda
    break;

  case 64: 
    sparki.moveStop(); // Para o movimento do Sparki
    sparki.gripperStop(); // Para o movimento da garra
    break;

  // Botões da garra
  case 9:  
    sparki.gripperOpen(); // Abre a garra
    break;

  case 7:  
    sparki.gripperClose(); // Fecha a garra
    break;

  // Buzzer
  case 74: 
    sparki.beep(); // Emite um sinal sonoro
    break;

  // Servo
  case 90: 
    sparki.servo(SERVO_LEFT); // Move o servo para a esquerda
    break;

  case 28: 
    sparki.servo(SERVO_CENTER); // Move o servo para o centro
    break;

  case 8: 
    sparki.servo(SERVO_RIGHT); // Move o servo para a direita
    break;

  // LED RGB
  case 25: 
    sparki.RGB(RGB_OFF); // Desliga o LED RGB
    break;

  case 12: 
    sparki.RGB(RGB_RED); // Acende o LED RGB em vermelho
    break;

  case 24: 
    sparki.RGB(RGB_GREEN); // Acende o LED RGB em verde
    break;

  case 94: 
    sparki.RGB(RGB_BLUE); // Acende o LED RGB em azul
    break;
  
  default:
    break; // Não faz nada para códigos desconhecidos
  }

  sparki.updateLCD(); // Atualiza o LCD
}

////////////////////////////////////////////////////////////////////////
//                         CÓDIGO DO TRANSMISSOR                      //
////////////////////////////////////////////////////////////////////////
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

int code = 0; // Armazena o código que será enviado

void loop()
{
  
  code = 70; // Define o código 70
  sparki.sendIR(code); // Envia o código 70 pelo LED infravermelho
  delay(1000); // Aguarda 1 segundo

  code = 64; // Define o código 64
  sparki.sendIR(code); // Envia o código 64 pelo LED infravermelho
  delay(1000); // Aguarda 1 segundo

  code = 21; // Define o código 21
  sparki.sendIR(code); // Envia o código 21 pelo LED infravermelho
  delay(1000); // Aguarda 1 segundo

  
  
  delay(1000); // Aguarda 1 segundo
}