//Gripper
/* Autor(es): 
   Source: Exemplo básico do teste da garra do Sparki
   Data: data do teste
  
   Objetivo: Testar o funcionamento das garras do Sparki,
   realizando movimentos de abertura, fechamento e parada.
   O programa também testa a abertura e o fechamento das
   garras utilizando uma distância específica.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   --não tem
*/

/* Execução
   Este programa utiliza as garras do Sparki para testar
   seus movimentos de abertura, fechamento e parada.

   Inicialmente, o comando sparki.gripperOpen() abre as garras
   do robô. O programa aguarda 1 segundo e, em seguida,
   utiliza o comando sparki.gripperClose() para fechá-las.

   Depois de aguardar mais 1 segundo, o comando
   sparki.gripperStop() interrompe o movimento das garras.

   Por fim, o programa testa a abertura e o fechamento das
   garras utilizando o valor de 3 centímetros como parâmetro.
   Após esses movimentos, o programa aguarda 1 segundo.

   O processo é repetido continuamente devido à execução
   da função loop().
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{
  sparki.gripperOpen();  // Abre as garras do robô
  delay(1000);           // Aguarda 1 segundo (1000 milissegundos)
  
  sparki.gripperClose(); // Fecha as garras do robô
  delay(1000);           // Aguarda 1 segundo (1000 milissegundos)
  
  sparki.gripperStop();  // Para o movimento das garras
  delay(1000);           // Aguarda 1 segundo (1000 milissegundos)

  sparki.gripperOpen(3);  // Abre as garras em 3 centímetros
  sparki.gripperClose(3); // Fecha as garras em 3 centímetros
  delay(1000);            // Aguarda 1 segundo (1000 milissegundos)
}