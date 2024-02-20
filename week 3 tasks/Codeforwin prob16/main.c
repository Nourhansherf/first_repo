#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks of five subjects: ");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    float total,avr,per;
    total=sub1+sub2+sub3+sub4+sub5;
    avr=total/5.00;
    per=(total/500.00)*100;
    printf("\nTotal = %0.2f",total);
    printf("\nAveradge = %0.2f",avr);
    printf("\npersentage = %0.2f",per);
    return 0;
}
