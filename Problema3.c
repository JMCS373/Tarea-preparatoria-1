#include <stdio.h>

int op;
char texto [1000];
int main() 
{
  do
    {
    printf("\n-------------------MEDIDOR DE TEXTO-------------------------\n");
    printf("1)MEDICION\n");
    printf("2)TERMINAR\n");
    if (scanf("%d",&op)!=1){
    printf("Error:Ingrese una opcion valida\n");
    } 
    getchar();
    switch (op)
      {
        case 1:
          printf("introduzca el texto que desea duplicar sin ESPACIOS:\n");
          scanf("%s",texto);
          char* cadena = texto;
          int contador = 0;
          while (cadena[++contador] != 0);
          printf("La cantidad de caracteres en el texto es %d\n", contador);  
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