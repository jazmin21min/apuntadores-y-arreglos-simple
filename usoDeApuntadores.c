/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int arreglo[]={1,2,3,4,5} ;
   int *ap1; 
   int *ap2;
   int *ap3;
   int *ap4;
   int *ap5;
   
   printf("Valores sin modificar\n");
   for(int i ; i<4 ; i++){
   printf("%d \n", arreglo[i]);
   }
   
   //ASIGNAMOS VALORES CON LOS APUNTADORES
   ap1=&arreglo[0];
   *ap1 = 10;
   ap2=&arreglo[1];
   *ap2=25;
   ap3=&arreglo[2];
   *ap3=180;
   ap4=&arreglo[3];
   *ap4=0;
   ap5=&arreglo[4];
   *ap5=5;
   
   printf("VALORES MODIFICADOS CON APUNTADORES\n");
   printf("%d \n", *ap1);
   printf("%d\n", *ap2);
   printf("%d\n", *ap3);
   printf("%d\n", *ap4);
   printf("%d \n", *ap5);

    return 0;
}

