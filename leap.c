#include<stdio.h>
void main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    //checking the year
    if(year%100==0){
        if(year%400==0){
            printf("ya its a leap year");
        }
        else{
            printf("not an leap year");
        }
    }
    else{
        if(year%4==0){
            printf("paka year");
        }
    }
}