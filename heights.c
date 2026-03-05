#include<stdio.h>
void main(){
    int heights[50],n,i;
    int sum=0;
    printf("Enter thenumber of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Element %d:",i);
        scanf("%d",&heights[i]);
        sum=sum+heights[i];


    }


}