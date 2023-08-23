#include <stdio.h>


int i,Mult, Multr, produc;
int main ()
   
{ 
    printf("ingrese el numero de la tabla y hasta que multiplicador quiere que llegue\n");
    printf("separados por comillas:\n");
    scanf("%d,%d", &Mult, &Multr);
    for (i=1 ; i <= Multr ; i++)
    {
        produc=Mult*i;
        printf("%d x %i = %.d\n",Mult,i,produc);
    }
    
    return 0;
}

/* for (i = Mult; Mult = Multr; Mult++)
    {
            
    ("%i*%d=%d",&i,&Multr,&Prod);
    printf("Mult x multr = producto"  i, Multr, Prod);*/