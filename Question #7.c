#include <stdio.h>

int main(){
    
    int num,reverse=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=num;i!=0;i/=10){
        reverse=reverse*10+i%10;
    }

    if(num==reverse){
        printf("The number is a palindrome\n");
    }else{
        printf("The number is not a palindrome\n");
    }

    return 0;

}