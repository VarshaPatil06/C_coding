
#include<stdio.h>

struct date
{
    /* data */
    int date;
    int month;
    int year;
};
struct student
{
    /* data */
    int roll_number;
    char name[30]; 
    
    struct date DOJ;
};

void main()
{
struct student student[2];
int i,j;
for (i=0;i<2;i++)
{
    printf("Enter the Date of Joining of %d student: ", i+1);
    scanf("%d/%d/%d", &student[i].DOJ.date, &student[i].DOJ.month, &student[i].DOJ.year);
     printf("Date of joining of %d student is : %d/%d/%d\n", j + 1, student[i].DOJ.date, student[i].DOJ.month, student[i].DOJ.year);
}
}