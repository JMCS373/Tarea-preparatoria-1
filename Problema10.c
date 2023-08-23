#include <stdio.h>

int op;
double LC,AC,VC,R,D,LTB,HTB,HT;
int main()
{
    double pi = 3.141592654;

    do
    {
        printf("---VOLUMEN DE FIGURAS GEOMETRICAS---\n");
        printf("\nEscriba el numero de la operacion que quiere realizar\n");
        printf("1)CUBO\n");
        printf("2)ESFERA\n");
        printf("3)PIRAMIDE DE BASE TRIANGULAR\n");
        printf("4)PIRAMIDE DE BASE CUADRADA\n");
        printf("5)Cerrar\n");
        if (scanf("%d",&op)!=1){
        printf("Error:Ingrese una opcion valida\n");
        }
        getchar();
        switch (op){
            case 1:
                printf("VOLUMEN DE UN CUBO\n");
                printf("Ingrese el lado del cubo:\n");
                scanf("%lf",&LC);
                VC=LC*LC*LC;
                printf("\nEl volumen del cubo es %.2lf unidades cubicas\n",VC);
            break;
            case 2:
                printf("VOLUMEN DE UN ESFERA\n");
                printf("Ingrese el radio de la esfera:\n");
                scanf("%lf",&R);
                double VE=(4*pi*R*R*R)/3;
                printf("\nEl volumen de la esfera es de %.2lf unidades cubicas\n\n\n",VE);
            break;
            case 3:
                printf("VOLUMEN DE UNA PIRAMIDE DE BASE TRIANGULAR\n");
                printf("Ingrese el lado del triangulo base, la altura, y la altura de la piramide separados por comillas:\n");
                scanf("%lf,%lf,%lf",&LTB,&HTB,&HT);
                double VP = (((LTB*HTB)/2)*HT)/3;
                printf("\nEl volumen de la piramide es de %.2lf unidades cubicas\n\n\n",VP);
            break;
            case 4:
                printf("VOLUMEN DE UNA PIRAMIDE DE BASE CUADRADA\n");
                printf("Ingrese el lado del cuadrado base y la altura de la piramide separados por comillas:\n");
                scanf("%lf,%lf",&LTB,&HT);
                double VPC = (LTB*LTB*HT)/3;
                printf("\nEl volumen de la piramide es de %.2lf unidades cubicas\n\n\n",VPC);
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