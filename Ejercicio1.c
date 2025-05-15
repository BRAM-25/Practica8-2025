//Abraham Zuñiga
// ejercicio1
//programa para validar que un numero sea par o imppar*/
#include <stdio.h>

int main() 
{
    int par = 0, impar = 0, n, cont = 1;

    printf("Dame el número de cifras a buscar: ");
    scanf("%d", &n);

    printf("\nUso del while\n");

    while (cont <= n) 
    {
        if (cont % 2 == 0) 
        
        {
            par = cont;
        } 
        
        else 
        
        {
            impar = cont;
        }
        
        cont++;
    }

    printf("El último número par es: %d\n", par);
    printf("El último número impar es: %d\n", impar);

    return 0;
}
