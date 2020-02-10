
//fibonacci series
// 0	1	1	2	3	5	8	13	21	34 ......
#include<stdio.h>
int main()
{
int last_number,a,b,c;

//how many numbers you want enter here
printf("Enter last limit : ");
scanf("%d",&last_number);

//assignment of variables
a = 0;
b = 1;

//process and print fibonacci number
while(a<=last_number)
{
printf("%d\t",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
