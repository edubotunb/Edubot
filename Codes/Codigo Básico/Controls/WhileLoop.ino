/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso do laço de repetição while para
   executar comandos enquanto uma determinada condição for
   verdadeira.
*/

/* Variáveis
   --não tem
*/

/* Execução
   O programa verifica continuamente a distância medida pelo
   sensor ultrassônico do Sparki. Enquanto a distância for
   menor que 10 centímetros, o Sparki se movimenta para frente.
   Quando a condição deixa de ser verdadeira, o laço while é
   encerrado.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki
 
void setup()
{
}
 
void loop()
{
    while( sparki.ping() < 10)
    {
         sparki.moveForward(1);
    }
}
