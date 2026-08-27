/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso de variáveis do tipo caractere
   (char) e a manipulação de um array de caracteres.
*/

/* Variáveis
   charArray: array de caracteres utilizado para armazenar
   uma sequência de caracteres.

   --não tem
*/

/* Execução
   O programa cria um array de caracteres, exibe um de seus
   elementos no LCD e, em seguida, adiciona o caractere de
   término de string ('\0') ao array para que ele possa ser
   exibido como uma sequência de caracteres.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki
 
void setup()
{
}
 
void loop()
{
  sparki.clearLCD(); // apaga o LCD
 
  char foo; // declara uma variável do tipo caractere
 
  sparki.print( "foo: "); 
  sparki.println( foo  );
 
  foo = 'b' + 1;
  sparki.print( "'b' + 1: ");
  sparki.println( foo ); // b + 1
 
  foo = 'b' - 1;
  sparki.print( "'b' - 1: ");
  sparki.println( foo ); // b - 1
 
  sparki.updateLCD(); // exibe na tela o que foi desenhado
  delay(1000); // aguarda 1 segundo (1000 milissegundos)
}
