#include <stdio.h>
#include <stdlib.h>
int main()
{   
    float a,c,result;
    char b;
    printf("input the frist number:");                      
    scanf("%f",&a);
    printf("input the Arithmetic Operators(+ - * /):");
    scanf(" %c",&b);
    printf("input the second number:");
    scanf("%f",&c);                              //input data       
switch(b)
    {   
    case '+':
    result=a+c;
    printf("result=%f\n", result);
    break;
    case '-':
    result=a-c;
    printf("result=%f\n", result);
    break;
    case '*':
    result=a*c;
    printf("result=%f\n", result);
    break;
    case '/':
        if (c == 0)
        {
        printf("cannot divide by zero\n");            
        }
        else
        {
        result=a/c;
        printf("result=%f\n", result);
        }
        break;
        default:                                                //in case wrong operation symbol
        printf("wrong operation symbol");
        break;
}
return 0;
}