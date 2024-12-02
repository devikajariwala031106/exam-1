#include<stdio.h>

int  main() 
{
int num;
int last,first;
printf("Enter the value of Start Number: ");
scanf("%d",&num);
last=num%10;
while(num != 0){
    first = num;
num=num/10;

}
printf("%d",first+last);

}