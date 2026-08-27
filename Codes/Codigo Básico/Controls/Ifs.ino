/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso de estruturas condicionais if
   para tomar decisões com base na distância medida pelo
   sensor ultrassônico do Sparki.
*/

/* Variáveis
   cm: armazena a distância medida pelo sensor ultrassônico,
   em centímetros.
*/

/* Execução
   O programa mede continuamente a distância entre o Sparki e
   um objeto utilizando o sensor ultrassônico. Se a distância
   for menor que 10 centímetros, o LED RGB acende em vermelho.
   Se for igual a 10 centímetros, acende em verde. Se for
   maior que 10 centímetros, acende em azul.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki
 
void setup()
{
}
 
void loop()
{
    int cm = sparki.ping(); // mede a distância usando os "olhos" do Sparki
 
    if (cm < 10) // se o Sparki medir uma distância menor que 10, acende em vermelho
    {
      sparki.RGB(RGB_RED);
    }
 
    if (cm == 10) // se o Sparki medir uma distância igual a 10, acende em verde
    {
      sparki.RGB(RGB_GREEN);
    }
 
    if (cm > 10) // se o Sparki medir uma distância maior que 10, acende em azul
    {
      sparki.RGB(RGB_BLUE);
    }
}
