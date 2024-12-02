#include<stdio.h>
int main()
{
    int gender,age;
    char name[10];

     printf("Enter the age :");
    scanf("%d",&age);

    printf("Enter the name :");
    scanf("%s",&name);
     
    printf("Enter the gender : ");
    scanf("%d",&gender);

     

    if(age<18)
    {
        printf("They are not eligible for vote ");
    }
     else 
     {
        printf("They are eligible for vote ");
     }
     return 0;
}   
