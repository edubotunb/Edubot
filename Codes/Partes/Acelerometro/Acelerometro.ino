//Acelerômetro
/* Autor(es): 
   Source: Exemplo básico do sensor acelerômetro do Sparki
   Data: data do teste
  
   Objetivo: Testar o acelerômetro de 3 eixos do Sparki,
   realizando a leitura dos eixos X, Y e Z e exibindo
   os valores medidos no LCD. O programa também utiliza
   o LED RGB para indicar uma condição baseada nas
   acelerações medidas.
  
   Testado em:
     Ex: ArduinoIDE versão x.x.x Linux/Windows 64 Bit
*/

/* Variáveis
   x: armazena a aceleração medida pelo acelerômetro no eixo X,
      correspondente ao movimento para esquerda/direita.

   y: armazena a aceleração medida pelo acelerômetro no eixo Y,
      correspondente ao movimento para frente/trás.

   z: armazena a aceleração medida pelo acelerômetro no eixo Z,
      correspondente ao movimento para cima/baixo.
*/

/* Execução
   Este programa utiliza o acelerômetro de 3 eixos do Sparki
   para medir a aceleração nos eixos X, Y e Z.

   Inicialmente, o LCD é limpo. Em seguida, os valores de
   aceleração de cada eixo são obtidos através dos comandos
   sparki.accelX(), sparki.accelY() e sparki.accelZ().

   O programa então verifica os valores medidos e utiliza
   o LED RGB do Sparki de acordo com as condições definidas.

   Os valores dos três eixos são exibidos no LCD através dos
   comandos sparki.print() e sparki.println().

   Por fim, o comando sparki.updateLCD() atualiza o LCD para
   mostrar as informações e o programa aguarda 100 milissegundos
   antes de realizar uma nova leitura.
*/

#include <Sparki.h> // Inclui a biblioteca do Sparki

void setup()
{
}

void loop()
{
  sparki.clearLCD(); // Limpa a tela do LCD
  
  float x = sparki.accelX(); // Mede a aceleração no eixo X
  float y = sparki.accelY(); // Mede a aceleração no eixo Y
  float z = sparki.accelZ(); // Mede a aceleração no eixo Z

  if (x > y and x > z)
  {
    sparki.RGB(RGB_BLUE); // Acende o LED RGB na cor azul
  }
  else if (x > y and x > z)
  {
    sparki.RGB(RGB_BLUE); // Acende o LED RGB na cor azul
  }
  else if (x > y and x > z)
  {
    sparki.RGB(RGB_BLUE); // Acende o LED RGB na cor azul
  }

  // Exibe as medições no LCD
  sparki.print("Accel X: ");
  sparki.println(x);

  sparki.print("Accel Y: ");
  sparki.println(y);
  
  sparki.print("Accel Z: ");
  sparki.println(z);
  
  sparki.updateLCD(); // Atualiza o LCD para exibir as informações
  
  delay(100); // Aguarda 100 milissegundos
}