#include <stdio.h>

int op,i,num,n1,n,ra; 
n1=1;
int main(){
do
    {
    printf("\n-------------------SERIE DE FIBONACCI-------------------------\n");
    printf("1)CALCULAR SERIE\n");
    printf("2)TERMINAR\n");
    if (scanf("%d",&op)!=1){
    printf("Error:Ingrese una opcion valida\n");
    } 
    getchar();
    switch (op)
      {
        case 1:
        printf("escriba la longitud que necesita de la serie FIBONACCI:\n");
        scanf("%d",&num);
        printf("\n\nLos valores de la longitud solicitada son:\n");
        for (i=1; i<=num; i++)
        {
          n=ra;
          ra=n+n1;
          n1=n;
          printf("%d\n",ra);
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