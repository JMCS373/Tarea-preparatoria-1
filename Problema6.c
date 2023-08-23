#include <stdio.h>

int op,i,num1,num2;

int main(){
do
    {
    printf("\n-------------------CONTADOR DE PARES-------------------------\n");
    printf("1)MEDICION COMENZANDO POR PAR\n");
    printf("2)MEDICION COMENZANDO POR IMPAR\n");
    printf("3)TERMINAR\n");
    if (scanf("%d",&op)!=1){
    printf("Error:Ingrese una opcion valida\n");
    } 
    getchar();
    switch (op)
      {
        case 1:
            printf("ingrese el primer y segundo numero entero\n");
            printf("separados por comillas:\n");
            scanf("%d,%d", &num1, &num2);
            printf("Los numeros pares que hay entre %d y %d es:\n",num1,num2);
            for (i = num1; i <= num2; i=i+2)
                {
                printf("%i,",i);
                }
            break;
        case 2:
            printf("ingrese el primer y segundo numero entero\n");
            printf("separados por comillas:\n");
            scanf("%d,%d", &num1, &num2);
            printf("Los numeros pares que hay entre %d y %d es:\n",num1,num2);
            for (i = num1+1; i <= num2; i=i+2)
                {
                printf("%i,",i);
                }
        break;

        case 3:
          printf("Terminar programa\n");
          break;
        default:
          printf("\tOpcion no valida\n"); 
      }
    } while (op !=3);
  return 0;
}