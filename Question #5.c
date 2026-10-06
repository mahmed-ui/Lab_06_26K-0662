#include <stdio.h>

int main(){
    
    int notes500[5] = {14, 5, 8, 12, 6};
    int notes200[5] = {15, 15, 10, 8, 14};
    int notes100[5] = {10, 25, 40, 35, 20};
    int i,totalbalance=0,withdraw;
    
    for (i=0;i<=4;i++){
        totalbalance+=((notes500[i]*500)+(notes200[i]*200)+(notes100[i]*100));
    }

    printf("How much money do you want to withdraw? \n");
    scanf("%d", &withdraw);

    if(withdraw>totalbalance){
        printf("Insufficient Balance\n");
    }else if((withdraw%100)!=0){
        printf("Invalid Amount, can withdraw multiples of 100 only\n");
    }else{
        printf("Transaction Approved\n");
    }

    return 0;

}