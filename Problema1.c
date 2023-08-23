#include <stdio.h>

char seguir;
int acumulador,acumuladors, num;
acumulador=0;
acumuladors=1;
int op, uno, dos;
int main()
{

    do
    {
        printf("---CALCULADORA---\n");
        printf("\nEscriba el numero de la operacion que quiere realizar\n");
        printf("1)Sumar\n");
        printf("2)Multiplicar\n");
        printf("3)Cerrar\n");
        if (scanf("%d",&op)!=1){
        printf("Error:Ingrese una opcion valida\n");
        }
        getchar();
        switch (op){
            case 1:
                suma();
                return 0;
                break;
              case 2:
                multiplicacion();
                return 0;
                break;
            case 3:
                printf("\tsalir\n");
                break;
            default:
                printf("\tOpcion no valida\n");
        }
    } while (op !=3);
    return 0;
}
/*SUMA*/
int suma()
{
    printf( "\n inserte un numero entero: " );
    scanf( "%d", &num );
    acumulador += num;
    printf("\n Insertar n para detener la suma o");
    scanf( "%c", &seguir );
    if(seguir=='n'){
        printf("\n   La suma de los numeros introducidos es: %d",acumulador );
    }else{
        num=0;
        suma();
    }
}
/*MULTIPLICACION*/
int multiplicacion()
{
    printf( "\n inserte un numero entero: " );
    scanf( "%d", &num );
    acumuladors *= num;
    printf("\n Insertar n para detener la multiplicacion o ");
    scanf( "%c", &seguir );
    if(seguir=='n'){
        printf("\n   La multiplicacion de los numeros introducidos es: %d",acumuladors );
    }else{
        num=1;
        multiplicacion();
    }    
}