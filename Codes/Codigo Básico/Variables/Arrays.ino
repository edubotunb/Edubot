/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso de variáveis do tipo inteiro e
   operações aritméticas básicas no Sparki.
*/

/* Variáveis
   foo: armazena um valor inteiro.

   bar: armazena um segundo valor inteiro.
*/

/* Execução
   O programa atribui valores às variáveis foo e bar e realiza
   operações de soma, multiplicação e divisão entre elas.
   Os resultados são exibidos no LCD do Sparki.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki
 
void setup() // o código dentro destas chaves é executado primeiro e apenas uma vez
{
 
}
 
void loop() // o código dentro destas chaves é executado repetidamente para sempre
{
   sparki.clearLCD(); // limpa o LCD
   
   char charArray[6] = {'h','e','l','l','o','!'};
   
   sparki.println( charArray[0] ); // imprime o primeiro item do array
   
   //sparki.println( charArray ); // tente imprimir o array
   
   charArray[5] = '\0'; // adiciona o caractere de fim ao array
   
   sparki.println( charArray ); // imprime o array com um caractere de fim
   
   sparki.updateLCD(); // exibe as novas informações no LCD
}
