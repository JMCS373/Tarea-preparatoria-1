#include <stdio.h>

int i, Mult, Multr, Produc, op; /*Multiplicando, Multiplicador, Producto*/
int main()

{
    do
    {
        printf("\n-------------------TABLAS DE MULTIPLICAR-------------------------\n");
        printf("1)MULTIPLICAR\n");
        printf("2)TERMINAR\n");
        if (scanf("%d",&op)!=1){
        printf("Error:Ingrese una opcion valida\n");
        }
        getchar();
        switch (op){
            case 1:
                printf("ingrese el numero de la tabla y hasta que numero llegar\n");
                printf("separados por comillas:\n");
                scanf("%d,%d", &Mult, &Multr);
                printf("La tabla del %d hasta el %d es:\n",Mult,Multr);
                for (i=1 ; i <= Multr ; i++)
                {
                    Produc=Mult*i;
                    printf("%d x %i = %.d\n",Mult,i,Produc);
                }
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