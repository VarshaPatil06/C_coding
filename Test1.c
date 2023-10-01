#include <stdio.h>
int main()
{
int age;
printf("Enter the the age of the candidate:");
scanf("%d", &age);
if (age>=18)
{
    printf("You can vote!\n");
}else
{
printf("You can not vote!\n");
}
}