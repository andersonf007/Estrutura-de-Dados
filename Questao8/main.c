#include<stdio.h>

int main(){
    
    int primeiro =1,ultimo=1,proximo=1,contador=2;
    
    printf("%d ,",primeiro);
    printf("%d ,",ultimo);
    while(contador<20){
        proximo = primeiro + ultimo;
        printf("%d, ",proximo);
        primeiro = ultimo;
        ultimo = proximo;
        contador++;
    }
    
    return 0;
}