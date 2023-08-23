#include <stdio.h>

int op,NUM,i,d;
char L='*';

int main(){

    do
    {
        printf("\n\n--------PATRON DE '*' ------\n");
        printf("\nEscriba el numero de la operacion que quiere realizar\n");
        printf("1)MOSTRAR PATRON\n");
        printf("2)Cerrar\n");
        if (scanf("%d",&op)!=1){
        printf("Error:Ingrese una opcion valida\n");
        }
        getchar();
        switch (op){
            case 1:
            printf("MOSTRAR PATRON\n");
            printf("Ingrese el numero de filas\n");
            scanf("%d",&NUM);
            for ( i = 1; i <= NUM; i++)
            {
                for ( d = 1; d <= i; d++)
                {
                    printf("*");
                }
                printf("\n");
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