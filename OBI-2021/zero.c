#include <stdio.h>
#include <stdlib.h>
int main () {
    int n;
    scanf ("%d", &n);
    int* numeros = (int*) malloc (n * sizeof (int));
    
    for (int i = 0; i < n; i++) 
        scanf ("%d", &numeros[i]);

    for (int i = 0; i < n; i++) {
        if (numeros[i] == 0) {
            for (int j = i-1; j > -1; j--) {
                if (numeros[j] != 0) {
                    numeros[j] = 0;
                    break;
                }
            }
        }
    }
    
    int sumDigitos = 0;
    for (int i = 0; i < n; i++) {
        sumDigitos += numeros[i];
    }

    printf ("%d\n", sumDigitos);

    free (numeros);
    return 0;
}
