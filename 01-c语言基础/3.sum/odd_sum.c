#include <stdio.h>
int main()
{
 int i,sum=0;   //for start adding from 0 
 for(i=1;i<=100;i++) //limit the range to 1-100
    if(i %2!=0)    //select odd numbers
        sum+=i;    //sum up
printf("sum=%d",sum);
    return 0;
}