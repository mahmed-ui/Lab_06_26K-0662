#include <stdio.h>

int main(){
    
    int marks[15]={51,87,75,79,96,90,98,65,83,95,99,56,45,60,91};
    int i,high=0,highest,low=0,lowest,sum=0,got100=0,already100=0;
    
    for(i=0;i<=14;i++){
        if(marks[i]==100){
            already100+=1;
        }
        marks[i]+=5;
        if(marks[i]>100){
            marks[i]=100;
        }
        if(marks[i]==100){
            got100+=1;
        }
        if(marks[i]>high){
            high=marks[i];
            highest=i;
        }else{
            low=marks[i];
            lowest=i;
        }
        sum+=marks[i];
    }

    float average=sum/15;
    
    printf("\n-----------SUMMARY-----------");
    printf("\nStudents who already have 100 are %d",already100);
    printf("\nStudents who got 100 after bonus are %d",got100);
    printf("\nStudent #%d got highest marks after bonus",highest+1);
    printf("\nStudent #%d got lowest marks after bonus",lowest+1);
    printf("\nRange of marks (HighestMarks-LowestMarks) is %d ",high-low);
    printf("\nAverage marks of the class is %.2f",average);

    return 0;


}