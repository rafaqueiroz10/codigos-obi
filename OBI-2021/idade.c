#include <stdio.h>

void troca (int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void ordena (int* a, int* b, int* c) {
    if (*a > *b) {
        troca (a, b);
    }
    if (*a > *c) {
        troca (a, c);
    }
    if (*b > *c) {
        troca (b, c);
    }
}

int main () {
    int n1, n2, n3;
    scanf ("%d %d %d", &n1, &n2, &n3);
    ordena (&n1, &n2, &n3);
    printf ("%d\n", n2);
    return 0;
}