#include<stdio.h>
#include<string.h>
void main(){
    int n;
    char str[50];
    printf("enter the number:");
    scanf("%d",&n);

    printf("enter the string:");
    scanf("%s",str);

    for(int i=0;i<n;i++){
        printf("%c",str[i]);
    }
}