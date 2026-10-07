#include <stdio.h>

int main(){

    int transfers[10]={2000,150000,80,20000,4580,210000,500000,30,10000,25000};
    int i,testflag=0,suspiciousflag=0,normalsum=0,normalcount=0,largest=0;
    
    for(i=0;i<=9;i++){
        if(transfers[i]<100){
            testflag+=1;
        }else if(transfers[i]>200000){
            suspiciousflag+=1;
        }else{
            normalsum+=transfers[i];
            normalcount+=1;
        }
        if(transfers[i]>largest){
            largest=transfers[i];
        }
    }
    
    float average=normalsum/normalcount;
    int flagcount=testflag+suspiciousflag;
    
    printf("Total flagged transactions are %d\n",flagcount);
    printf("Largest Transaction is %d\n",largest);
    printf("Average of normal transactions are %.2f\n",average);

    return 0;

}