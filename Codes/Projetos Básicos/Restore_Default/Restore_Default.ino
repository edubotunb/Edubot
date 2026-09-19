/* Autor(es): ArcBotics
   Source: https://arcbotics.com/lessons/sparki/
   Data: 25/08/2026

   Objetivo: Demonstrar o programa padrão de fábrica do Sparki,
   permitindo controlar suas principais funções por meio do
   controle remoto e executar seu comportamento autônomo básico.
*/

/* Variáveis
   program: indica se o modo autônomo do Sparki está ativado.

   code: armazena o código recebido pelo receptor infravermelho.

   cm: armazena a distância medida pelo sensor ultrassônico,
   em centímetros.
*/

/* Execução
   O programa inicia centralizando o servo e aguarda comandos
   do controle remoto. Os botões permitem controlar os motores,
   a garra, o servo, o buzzer e o LED RGB.

   Quando o modo autônomo está ativado, o Sparki se movimenta
   para frente e utiliza o sensor ultrassônico para detectar
   obstáculos. Ao encontrar um obstáculo a menos de 20 centímetros,
   o robô recua e gira para a direita antes de continuar.
*/
#include <Sparki.h>  // inclui a biblioteca do robô

void setup() {
  sparki.servo(SERVO_CENTER); // centraliza o servo
}

// /------^-----\
// |            |
// | 69  70  71 |
// | 68  64  67 |
// |  7  21   9 |
// | 22  25  13 |
// | 12  24  94 |
// |  8  28  90 |
// | 66  82  74 |
// \____________/

int program = true;
void loop() {
  
  // Procura por sinais do receptor infravermelho
  int code = sparki.readIR();
  
   // se houver um comando válido do controle remoto
  if(code != -1){
    sparki.moveStop(); // para os motores
    sparki.RGB(RGB_OFF); // apaga o LED RGB
    program = false; // desativa o programa automático
  } 
  
  switch(code){
    case 70: sparki.moveForward(); break;
    case 21: sparki.moveBackward(); break;
    case 67: 
    case 71: sparki.moveRight(); break;
    case 68: 
    case 69: sparki.moveLeft(); break;
    case 64: sparki.moveStop();
             sparki.gripperStop(); 
             break;      

    // Botões da garra
    case 9:  sparki.gripperOpen(); break;
    case 7:  sparki.gripperClose(); break;

    // Buzzer
    case 74: sparki.beep(); break;

    // Servo
    case 90: sparki.servo(SERVO_LEFT); break;
    case 28: sparki.servo(SERVO_CENTER); break;
    case 8:  sparki.servo(SERVO_RIGHT); break;

    // LED RGB
    case 25: sparki.RGB(RGB_OFF); break;
    case 12: sparki.RGB(RGB_RED); break;
    case 24: sparki.RGB(RGB_GREEN); break;
    case 94: sparki.RGB(RGB_BLUE); break;

    // Controle do programa
    case 66:  
      sparki.moveStop();
      sparki.RGB(0,0,0);
      program = false; break;
    case 82:  
      program = true; break;
  }  
  
  // Executa o código autônomo se
  // o programa estiver ativado
  if(program == true){
    sparki.RGB(RGB_GREEN); // acende o LED em verde
    sparki.moveForward(); // move o Sparki para frente
    int cm = sparki.ping(); // mede a distância usando os "olhos" do Sparki
        
    if(cm != -1) // garante que a distância não esteja muito próxima ou muito distante
    { 
        if(cm < 20) // se a distância medida for menor que 20 centímetros
        {
            sparki.RGB(RGB_RED); // acende o LED em vermelho
            sparki.beep(); // emite um sinal sonoro!
            sparki.moveBackward(10); // recua 10 centímetros
            sparki.moveRight(30); // gira 30 graus para a direita
        }
    }
    delay(100); // aguarda 0,1 segundo (100 milissegundos)
  }
}
