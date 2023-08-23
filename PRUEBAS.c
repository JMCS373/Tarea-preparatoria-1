/*#include <stdio.h>

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
          printf("introduzca el texto que desea contar SIN ESPACIOS:\n");
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
*/
#include <stdio.h>

int main () 
{
double num1, num2;
printf("escriba el primer numero:");
scanf("%lf",&num1);

printf("escriba el segundo numero:");
scanf("%lf",&num2);

double suma = num1+num2;
double resta = num1-num2;
double multiplicacion = num1*num2;

printf("Resultados:\n");
printf("suma: %.2lf\n", suma);
printf("resta: %.2lf\n", resta);
printf("multiplicacion: %.2lf\n", multiplicacion);

if (num2 == 0) 
{
    printf("Error,no se puede dividir entre 0\n");
}
else
{
   double division = num1/num2;
   printf("division: %.2lf\n",division); 
}

return 0;

}