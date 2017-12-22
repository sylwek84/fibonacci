#include <stdio.h>

int main() {

    int n_wyraz;
    int licznik=0;

{
printf("Podaj ktory wyraz ciagu wyliczyc, n= ");
scanf("%d ", &n_wyraz);

	if(n_wyraz == 1)  printf("\n Wartosc %d-tego wyrazu ciagu Fibonacciego wynosi 0 \n");
	if(n_wyraz == 2)  printf("\n Wartosc %d-tego wyrazu ciagu Fibonacciego wynosi 1 \n");
	if(n_wyraz == 3)  printf("\n Wartosc %d-tego wyrazu ciagu Fibonacciego wynosi 1 \n");

	else (n_wyraz >=4) {
		for (licznik = 0; licznik <= n_wyraz; licznik++);
            		wynik = licznik(n-1)+(n-2);}
       	 printf("\n Wartosc %d-tego wyrazu ciagu Fibonacciego wynosi: ", wynik);



    return 0;
}
