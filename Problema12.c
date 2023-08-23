#include <stdio.h>

int op;
double G,M,RA;
int main(){
    M=1;
    double L=4.54609188;
    double K=1.609344;
    do
    {
        printf("--------COMBUSTIBLE A DISTANCIA------\n");
        printf("\nEscriba el numero de la operacion que quiere realizar\n");
        printf("1)GALONES A MILLAS\n");
        printf("2)GALONES A KILOMETROS\n");
        printf("3)LITROS A MILLAS\n");
        printf("4)LITROS A KILOMETROS\n");
        printf("5)Cerrar\n");
        if (scanf("%d",&op)!=1){
        printf("Error:Ingrese una opcion valida\n");
        }
        getchar();
        switch (op){
            case 1:
                printf("GALONES A MILLAS\n");
                printf("escriba la cantidad de galones a convertir:\n");
                scanf("%lf",&G);
                RA=G*M;
                printf("\n %.2lf galones equivalen a %.2lf Millas\n",G,RA);
            break;
            case 2:
                printf("GALONES A KILOMETROS\n");
                printf("escriba la cantidad de galones a convertir:\n");
                scanf("%lf",&G);
                double RB=G*1.609344;
                printf("\n%.2lf galones equivalen a %.2lf Kilometros\n",G,RB);
            break;
            case 3:
                printf("LITROS A MILLAS\n");
                printf("escriba la cantidad de litros a convertir:\n");
                scanf("%lf",&G);
                double RC=G*1/L;
                printf("\n%.2lf Litros equivalen a %.2lf Millas\n",G,RC);
            break;
            case 4:
                printf("LITROS A KILOMETROS\n");
                printf("escriba la cantidad de Litros a convertir:\n");
                scanf("%lf",&G);
                double RD=(G*(L/4))*((K/4)/(L/4));
                printf("\n%.2lf Litros equivalen a %.2lf Kilometros\n",G,RD);
            break;
            case 5:
                printf("\tsalir\n");
            break;
            default:
                printf("\tOpcion no valida\n");
        }
    } while (op !=5);
    return 0;
}