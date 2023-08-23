#include <stdio.h>

int op,num1,i,acumulador;
acumulador=1;
int main()
{
        do
    {
        printf("\n-------------------FACTORIAL-------------------------\n");
        printf("1)ENCONTRAR FACTORIAL\n");
        printf("2)TERMINAR\n");
        if (scanf("%d",&op)!=1){
        printf("Error:Ingrese una opcion valida\n");
        }
        getchar();
        switch (op){
            case 1:
            printf("Ingrese un numero entero:\n");
            scanf("%d",&num1);
            for (i = 1; i <= num1; i++)
            {
                printf("%i x ",i);
                acumulador *= i;
            }
            printf("= %d",acumulador);
            printf("\n\nEl valor Factorial de %d es = %d",num1,acumulador);
            break;
            case 2:
                printf("Terminar programa\n");
                break;
            default:
                printf("\tOpcion no valida\n"); 
        }
    } while (op !=2);
    return 0;
}