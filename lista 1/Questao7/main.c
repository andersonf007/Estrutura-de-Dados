#include <stdio.h> 

main() {
    
    int n1, n2, soma=0, i; 
    
    printf("Informe os nC:meros: "); 
    scanf("%d %d", &n1, &n2); 

    for (i=n1+1; i<n2; i++) { 
        soma += i; 
    } 
    printf("\n Soma: %d\n", soma); 
}