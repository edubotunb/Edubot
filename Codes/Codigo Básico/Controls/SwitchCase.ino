/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso da estrutura switch-case para
   executar diferentes comandos de acordo com o código recebido
   pelo controle remoto infravermelho.
*/

/* Variáveis
   code: armazena o código recebido pelo receptor infravermelho
   do Sparki.
*/

/* Execução
   O programa verifica continuamente o código recebido pelo
   receptor infravermelho. A estrutura switch-case compara
   esse código com diferentes valores e, de acordo com o botão
   pressionado no controle remoto, altera a cor do LED RGB.
*/
#include <Sparki.h>
 
void setup() 
{ 
}
 
void loop() 
{  
  int code = sparki.readIR(); // verifica o código recebido do controle remoto
 
  switch(code){
 
  case 66:  
      sparki.RGB(RGB_RED); // acende o LED RGB em vermelho
      break;
  case 82:  
      sparki.RGB(RGB_GREEN); // acende o LED RGB em verde
      break;
  case 74:  
      sparki.RGB(RGB_BLUE); // acende o LED RGB em azul
      break;
  default:
      break;
  }
}
