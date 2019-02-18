#include <stdio.h>

int primo(int n){
    
    int i, cont=0;
    for(i=1;i<=n;i++){
        
        if(n%i==0) cont++;

        if(cont==2){
            return 1;
        }else{
            return 0;
        }
    }
}
main(){
    int m,x;
    
    printf("entre com m: ");
    scanf("%d", &m);
        
    x = primo(m);
    
    if(x==1){
    
    printf(" primo: 1\n");
    
    }
    
    if(x==0){
    
    printf(" nC#o C) primo: 0\n");
    
    }
}