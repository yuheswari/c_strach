#include<stdio.h>
void main(){
    int num1, num2;
    char op;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("enter the opeartor:");
    scanf("\n %c",&op);
    switch(op){
        case '+':
            printf("sum: %d",num1+num2);
            break;
        
        case '-':
            printf("diff %d",num1-num2);
            break;
        case '*':
            printf("mul %d",num1*num2);
            break;
        
        case '/':
            printf("div %d",num1/num2);
            break;
        

        default:
            printf("Invalid oprator");

        

        }
    }
