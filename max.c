#include<stdio.h>
void main(){
    int n,arr[50],min,max;
    printf("enter the n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter ele %d:",i);
        scanf("%d",&arr[i]);
    }

    min=arr[0];
    max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else{
            min=arr[i];
        }
    }
    printf("max:%d",max);
    printf("min %d:",min);
}