#include <stdio.h> 

main() { 
    
    int a=22, b=55; 
    printf("EndereC'o de a %d \t conteC:do: %d \n", &a, a); 
    printf("EndereC'o de b %d \t conteC:do: %d \n", &b, b); 
    if(&a > &b)
        printf("Maior endereC'o: %d\n", &a);
    else
        printf("Maior endereC'o: %d\n", &b);
}