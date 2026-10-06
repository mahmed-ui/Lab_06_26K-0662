#include <stdio.h>

int main(){

    int seats[15]={0,0,1,1,0,0,0,1,0,1,1,0,1,1,1};
    int i,j=0,k=14,m=0,booked=0,empty=0,firstavailable,lastavailable; 
    int flag1=0,flag2=0,bookingcounter=0;

    for(i=0;i<15;i++){
        if(seats[i]==0){
            empty+=1;
        }else{
            booked+=1;
        }
    }
    
    while(flag1==0 && j<15){
        if(seats[j]==0){
            firstavailable=j+1;
            printf("First available seat number is %d\n",firstavailable);
            flag1=1;
        }
        j+=1;
    }
    
    while(flag2==0 && k>0){
        if(seats[k]==0){
            lastavailable=k+1;
            printf("Last available seat number is %d\n",lastavailable);
            flag2=1;
        }
        k-=1;
    }

    while(bookingcounter<4 && m<15){
        if(seats[m]==0){
            seats[m]=1;
            bookingcounter+=1;
        }
        m+=1;
    }

    printf("-----Final seating chart-----\n");
    for(i=0;i<=14;i++){
        if(seats[i]==0){
            printf("Seat#%d is empty\n",i+1);
        }else{
            printf("Seat#%d is booked\n",i+1);
        }
    }

    return 0;

}