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
    if(op =='+'){
        printf("sum:%d",num1+num2);
    }else if(op=='-'){
        printf("sub:%d",num1-num2);
    }
    else if(op=='*'){
        printf("multi %d",num1*num2);
    }
    else if(op=='/'){
        printf("divi %d",num1/num2);
    }
    else{
        printf("iNVALID OPERATOR");
    }


}