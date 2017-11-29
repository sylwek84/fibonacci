#include <stdio.h>
unsigned int fibonacci(int n) 
{	int a, b;
	if(n==0) return 0;
	if(n==1) return 1;
	return fibonacci(n-1)+fibonacci(n-2);

	a=0, b=1;
	for (int i=0; i<(n-1); i++) {
	b+=a; /*wyliczanie kolejnego wyrazu ciągu*/ }
	return b;	}
int main()
{	int ilosc;
	printf("Podaj dla ilu wyrazów ciągu fibonacciego chcesz wylicz sumę\n");
	scanf(" %i", &ilosc);
	for (int i = 0; i <=ilosc; i++)
	printf("Suma ciągu wynosi: ", fibonacci);
	return 0;	}
