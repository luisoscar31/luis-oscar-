#include <stdio.h>
#include <stdlib.h>

int SAL = 0, NOM = 0;
int main(void){

 for(int i=1;i<=15;i++){ // ciclo que captura los salarios y los suma para saber cual es la nomina

  scanf("%d",&SAL);
  NOM += SAL; }

/*
int i=1;
  scanf("%d",&SAL);
while(i<=15){
  NOM = NOM + SAL;

i++;
}
*/
 printf("el total de la nomina es: %d",NOM); // funcion para imprimir la nomina

}





