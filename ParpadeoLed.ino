/***************************************************Capitulo 1 -  Blink ***********************************************************
*                                                                                                                                 *
*     En este primer capitulo aprenderemos a hacer el Hola mundo de la programacion de Arduino que es encender y apagar           *
*  un led.                                                                                                                        *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa Wemos D1 Mini                                                                                                           *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/   

int led = LED_BUILTIN; // Declaramos nuestra variable que usaremos para el led

void setup(){
  pinMode(led,OUTPUT); //Declaramos como pin de salida la variable led
  }
void loop(){
  digitalWrite(led,HIGH); //Escribimos un valor alto en la salida digital led    
  delay(2000);  //Damos una pausa por 2000 milisegundos (2 segundos)
  digitalWrite(led,LOW); //Escribimos un valor bajo en la salida digital led
  delay(2000); //Damos una pausa por 2000 milisegundos (2 segundos)
}  
