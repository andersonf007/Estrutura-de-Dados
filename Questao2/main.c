main(){
     int x[10],y[10],z[10],i;
     
    for(i=0;i<10;i++){
        printf("y[%d] = ",i);
        scanf("%d",&y[i]);
    }                       
    for(i=0;i<10;i++){
        printf("x[%d] = ",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<10;i++){
        z[i]=x[i]*y[i];
        printf("z[%d] = %d\n",i,z[i]);
    }
   
}