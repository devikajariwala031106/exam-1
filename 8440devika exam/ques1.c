#include<stdio.h>

int main()
{
    int angle1,angle2,angle3;

    printf("Enter 1st angle : ");
    scanf("%d",&angle1);

    printf("Enter 2nd angle :");
    scanf("%d",&angle2);

    angle3= 180-(angle1 + angle2);
    printf("Third angle : %d",angle3);

    return 0;


}