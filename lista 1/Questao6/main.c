#include <stdio.h> 

float cf (float f){
    
    f=f*1.8+32; 
    return f; 

}

main(){
        
    float c,f; 
    printf ("Digite a temperatura em celcius\n"); 
    scanf ("%f",&c); 
    
    printf ("%f Em fahrenheit C) %f:",c,cf(c)); 
}