#include <stdio.h>

int main(){
    
    int stock[10]={23,45,63,10,5,12,34,56,78,90};
    int minimum[10]={20,50,80,10,50,10,30,50,80,100};
    int i,orderqty,totalreorder=0,largestrorder=0,product;
    
    printf("\n-------------------STATUS---------------------");
    for(i=0;i<=9;i++){
        if(stock[i]<minimum[i]){
            printf("\nProductNo.%d needs reordering",i+1);
            orderqty=minimum[i]-stock[i];
            totalreorder+=orderqty;
            printf("\nTotal %d pieces needs to be ordered",orderqty);
        }
        if(largestrorder<orderqty){
            largestrorder=orderqty;
            product=i;
        }
    }
    
    printf("\n---------------------SUMMARY--------------------------");
    printf("\nProductNo.%d has largest reorder quantity",product+1);
    printf("\nTotal reorder quantity across all products is %d",totalreorder);

    return 0;

}