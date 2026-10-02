#include <stdio.h>

int main(){
    
    int Signals[12] = {12, 15, 10, 8, 20, 25, 30, 35, 40, 45, 50, 55};
    int i,j,sum=0;
    
    for(i=0;i<=11;i++){
        sum+=Signals[i];
    }
    
    int avg,highest=Signals[0],lowest=0,overloaded=0;
    
    avg=sum/12;
    
    for(j=0;j<=11;j++){
        
        if(Signals[j]>avg){
            overloaded+=1;
        }
        if(Signals[j]>highest){
            highest=Signals[j];
        }else{
            lowest=Signals[j];
        }

    }
    
    printf("%d signals are overloaded\n",overloaded);
    printf("Difference between Highest & Lowest %d\n",highest-lowest);

    return 0;
}
