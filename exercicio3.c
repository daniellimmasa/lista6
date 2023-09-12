#include<stdio.h>
#include<math.h>
#include <stdlib.h>
 int main(){
int prato, sobremesa, bebida;

printf("digite o numero de seu prato  ");
scanf("%d", &prato);
printf("digite o numero de sua sobremesa ");
scanf("%d", &sobremesa);
printf("digite o numero de sua bebida ");
scanf("%d",&bebida);

switch(prato){
     case 1:
       prato = 180;
       break;
     case 2:
       prato = 230;
       break;
     case 3:
       prato = 250;
       break;

     case 4:
       prato = 350;
       break;
       
       default:
       printf("numero invalido. \n");
       break;
}
switch(sobremesa){
     case 1:
       sobremesa = 75;
       break;
     case 2:
       sobremesa= 110;
       break;
     case 3:
       sobremesa = 170;
       break;

     case 4:
       sobremesa = 200;
       break;
       
       default:
       printf("numero invalido. \n");
       break;
}


switch(bebida){
     case 1:
       bebida = 20;
       break;
     case 2:
       bebida = 70;
       break;
     case 3:
       bebida = 100;
       break;

     case 4:
       bebida = 65;
       break;
       
       default:
       printf("numero invalido. \n");
       break;


}

printf(" o total de calorias e: %d cal \n ", prato + bebida +sobremesa);

return 0;
}






 
