#include <stdio.h>

int main() {
	int maior, numero[10], i;
	maior = 0;
	
	for (i = 1; i <= 10; i++) {
	    
		printf("Digite um numero: ");
		scanf("%d", &numero[i]);
		if(numero[i] > maior) {
			maior = numero[i];
		}
	}
	printf("\n O maior numero e: [%d]",maior);
}