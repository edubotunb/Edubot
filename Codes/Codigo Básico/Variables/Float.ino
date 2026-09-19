/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o uso de variáveis do tipo ponto
   flutuante (float) e a realização de operações aritméticas
   com números decimais.
*/

/* Variáveis
   foo: armazena um valor do tipo float.

   bar: armazena um segundo valor do tipo float.

   --não tem
*/

/* Execução
   O programa atribui valores às variáveis foo e bar e realiza
   operações de soma, multiplicação e divisão entre elas.
   Os resultados das operações são exibidos no LCD do Sparki.
*/
#include <Sparki.h> // inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{
  sparki.clearLCD(); // apaga o LCD

  float foo; // declara uma variável do tipo ponto flutuante com o nome 'foo'

  foo = 10; // atribui o valor 10.0 a foo
  
  float bar = 4; // declara uma variável do tipo ponto flutuante com o valor 4.0
  
  sparki.print( "foo: "); 
  sparki.println( foo  );
  
  sparki.print( "bar: ");
  sparki.println( bar ); 
  
  sparki.print( "foo + bar: ");
  sparki.println( foo + bar ); // soma foo e bar
  
  sparki.print( "foo * bar: ");
  sparki.println( foo * bar ); // multiplica foo por bar
  
  sparki.print( "foo / bar: ");
  sparki.println( foo / bar ); // divide foo por bar
  
  sparki.updateLCD(); // exibe na tela o que foi desenhado
  delay(1000); // aguarda 1 segundo (1000 milissegundos)
}
