#include<stdio.h>

int main(){
    float a,b;
    char c;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter operator: ");
    scanf(" %c",&c);
    printf("Enter a number: ");
    scanf("%f",&b);
    if (c =='+'){
        printf("answer is: %f",a+b);
    }
    else if (c =='-'){
        printf("answer is: %f",a-b);
    }
    else if (c =='*'){
        printf("answer is: %f",a*b);
    }
    else if (c =='/'){
        printf("answer is: %f",a/b);
    }
    else{
        printf("Syntax error");
    }
    return 0;
}