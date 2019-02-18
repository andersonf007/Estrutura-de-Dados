#include<stdio.h>
   
    media3(int nota1, int nota2, int nota3){
        int media; 
        
        return media = ((nota1+nota2+nota3)/3);
        
    }
    
    maiorNota(int nota1, int nota2, int nota3){
        
        if(nota1 >= nota2){
            if(nota1 >= nota3)
                return nota1;
        }else{
            if(nota2 >= nota3)
                return nota2;
        }
        return nota3;
            
    }
    
    menorNota(int nota1, int nota2, int nota3){
        
        if(nota1 <= nota2){
            if(nota1 <= nota3)
                return nota1;
        }else{
            if(nota2 <= nota3)
                return nota2;
        }
        return nota3;
            
    }

main(){
            int nota1, nota2, nota3;
            
            printf("Entre com o valor 1: ");
            scanf("%d", &nota1);
            printf("Entre com o valor 2: ");
            scanf("%d", &nota2);
            printf("Entre com o valor 3: ");
            scanf("%d", &nota3);
            
            printf("Sua maior nota foi: %d \n", maiorNota(nota1,nota2,nota3));
            printf("Sua menor nota foi: %d \n", menorNota(nota1,nota2,nota3));
            printf("Sua media com as tres notas C): %d \n", media3(nota1,nota2,nota3));
            printf("Sua media sem a menor nota C): %d \n", (nota1+nota2+nota3 - menorNota(nota1,nota2,nota3))/2);
}