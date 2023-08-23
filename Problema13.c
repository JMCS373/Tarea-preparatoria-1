#include <stdio.h>

int op,NUM,i,d;

int main(){

    do
    {
        printf("\n\n--------PAR O IMPAR?------\n");
        printf("\nEscriba el numero de la operacion que quiere realizar\n");
        printf("1)DETERMINAR PAR O IMPAR\n");
        printf("2)Cerrar\n");
        if (scanf("%d",&op)!=1){
        printf("Error:Ingrese una opcion valida\n");
        }
        getchar();
        switch (op){
            case 1:
            printf("\n\n-----DETERMINAR PAR O IMPAR-----\n");
            printf("Ingrese el numero entero que desea determinar:\n");
            scanf("%d",&NUM);
            for (i = NUM; 0<=i; i=i-2)
            {
                /*HOLA*/
            }
            if (i==-1)
            {
                printf("El numero ingresado es impar");
            } 
            else
            {
                printf("El numero ingresado es par");
            }            
            break;
            case 2:
                printf("\tsalir\n");
            break;
            default:
                printf("\tOpcion no valida\n");
        }
    } while (op !=2);
    return 0;
}