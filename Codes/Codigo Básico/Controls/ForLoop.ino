/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso do laço de repetição for para
   executar um conjunto de comandos várias vezes.
*/

/* Variáveis
   i: variável de controle do laço for, utilizada para contar
   o número de repetições.
*/

/* Execução
   O programa utiliza um laço for para repetir três vezes o
   comando que faz o Sparki emitir um sinal sonoro. Após cada
   sinal, o programa aguarda 0,3 segundo. Ao finalizar as três
   repetições, aguarda dois segundos antes de iniciar o ciclo
   novamente.
*/
#include <Sparki.h>  // inclui a biblioteca do Sparki
 
void setup()
{
}
 
void loop()
{
  for (int i = 0; i < 3; i=i+1)
  {
    sparki.beep(); // o Sparki emite um sinal sonoro!
    delay(300); // aguarda 0,3 segundos
  }
 
  delay(2000); // aguarda dois segundos (2000 milissegundos)
}
