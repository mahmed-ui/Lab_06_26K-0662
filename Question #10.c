#include <stdio.h>

int main(){
    
    int totalwithdrawalamount=0,transactions=0,amount,flag=1;
    
    while(flag==1){
        
        printf("Enter amount to withdraw: ");
        scanf("%d", &amount);
        
        if(amount!=0){
            totalwithdrawalamount+=amount;
            transactions+=1;
            printf("ATM has processed it\n");
        }else{
            flag=0;
        }
    }
    
    printf("---------SUMMARY---------\n");
    printf("Total withdrawal amount is Rs.%d\n",totalwithdrawalamount);
    printf("Total number of transactions is %d\n",transactions);

    return 0;

}