#include <stdio.h>

int op,F,C,Gra;
int main() 
{
  do
    {
        printf("\n-------------------TEMPERATURAS-------------------------\n");
        printf("1)MEDICION DE FAHRENHEIT A CELCIUS\n");
        printf("2)MEDICION DE CELCIUS A FAHRENHEIT\n");
        printf("3)TERMINAR\n");
        if (scanf("%d",&op)!=1){
        printf("Error:Ingrese una opcion valida\n");
        } 
        getchar();
        switch (op){
            case 1:
                printf("MEDICION DE FAHRENHEIT A CELCIUS\n");
                printf("Introduzca los grados Fahrenheit a convertir \n");
                scanf("%d",&Gra);
                C = (Gra-32)*0.5555555556;
                printf("Los %d grados Fahrenheit son %d grados Celcius",Gra,C);
                break;
            case 2:
                printf("MEDICION DE GRADOS CELCIUS A FAHRENHEIT\n");
                printf("Introduzca los grados Celcius a convertir \n");
                scanf("%d",&Gra);
                F = (Gra/0.5555555556)+32;
                printf("Los %d grados Celcius son %d grados Fahrenheit",Gra,F);
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