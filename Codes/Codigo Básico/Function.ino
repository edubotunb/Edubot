/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso de uma função em C++ para realizar
   a soma de dois números e exibir o resultado no LCD do Sparki.
*/

/* Variáveis
   sum: armazena o resultado da soma dos números.

   a: primeiro número utilizado pela função addition().

   b: segundo número utilizado pela função addition().

   r: armazena temporariamente o resultado da soma dentro
   da função addition().
*/

/* Execução
   O programa chama a função addition() passando os valores 3 e 5
   como parâmetros. A função soma os dois valores e retorna o
   resultado, que é armazenado na variável sum.

   Em seguida, o resultado é exibido no LCD do Sparki.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{
  sparki.clearLCD();
  
  int sum;
  sum = addition(3, 5);
  sparki.println(sum);
  
  sparki.updateLCD();
}

int addition( int a, int b )
{
    int r;
    r = a + b;
    return r;
}
