#include <stdio.h>
int main() 
{
    int a,b,empty;   //定义三个变量(define three variables)
    a=1,b=2;        //赋值(assign)
    printf("a=%d,b=%d\n",a,b);
    int*p=&a;       //p指向a(p to a)
    int*q=&b;       
    empty=*p;       //把a的值通过p赋给empty(assign the value of a to empty through pointer p)
    *p=*q;          //把b的值给a(assign b to a)
    *q=empty;       
    printf("a=%d,b=%d",a,b);
        return 0;
}
