#include <stdio.h>
#include <malloc.h>
int main() 
{
int n;                                           //the number of ints
printf("input the number of integers:");   
scanf("%d",&n);

int *p;
p=(int *)malloc(n * sizeof(int));                        //allocate memory for n ints
//printf("sizeof(int)=%d\n",n*sizeof(int));

printf("input %d integers in turn:\n", n);                     

int sum = 0;

for (int i = 0; i < n; i++)                             //Read each integer into the array in turn and sum up
{									                                          
scanf("%d", &p[i]);
sum=sum+p[i];		;								  
}
float average = (float)sum/n;          
printf("average=%f\n",average);
free(p);                               
p = NULL;  
return(0);
}
