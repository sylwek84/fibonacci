#include <stdio.h>

void fibonaci(int n) {
    unsigned long int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        b += a; /*wyliczanie kolejnego wyrazu ciągu*/
        a = b - a; /*przypisujemy wartość zmiennej a*/
    }
}

int main() {
    int n;

    printf("Podaj dla ilu wyrazów ciągu fibonaciego chcesz wylicz sumę\n");
    scanf(" %i", &n);

    fibonaci(n);
    return 0;
}
