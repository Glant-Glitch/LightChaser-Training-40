#include <stdio.h>
#include <malloc.h>

struct student
{
char name[100];                      //define the structure
float score;
};

int main()
{
int n;                                           //the number of students
printf("input the number of students:");   
scanf("%d",&n);

struct student *x;
x =(struct student *)malloc(n * sizeof(struct student));
printf("input each student's name and score(use Spacebar each data) :\n");

for (int i = 0; i < n; i++) 
{ 
scanf("%s %f", &x[i].name, &x[i].score);

printf("name: %s score: %f\n", x[i].name, x[i].score);
}

free(x);
x =NULL;

return 0;
}




