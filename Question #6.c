#include <stdio.h>

int main(){
    
    int generations[10]={0};
    int i,a=0,b=1,next;
    
    for(i=0;i<=9;i++){
        next=a+b;
        a=b;
        b=next;
        generations[i]=a;
    }
    
    for(i=0;i<=9;i++){
        printf("Generation.%d = %d \n",i+1,generations[i]);
    }

    return 0;
}