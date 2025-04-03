//Abraham Zuñiga
// ejercicio1
//programa para validar que un numero sea par o imppar*/
#include <stdio.h>

void main()
{
    int npar, impar, n, cont=1;
    printf("dame el numero de cifras a buscar: ");
    scanf("%d" &n);
    printf("\nUso del wile\n")
    
    while(cont<n)
    {
        if(cont % 2 == 0)
        {
            par = cont;
        }
        else
        {
            impar=cont;
        }
        cont ++;
    }
    while (cont<=n);
    printf("el ultimo numero par es: %d\n",par);
    printf("el ultimo numero impar es: %d\n",impar);
} 
