#include<stdio.h>

int dado()
{
    return (rand()%6);
}

main(){
    
    printf("%d", dado());
    
}