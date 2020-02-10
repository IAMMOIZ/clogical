//fibonacci series
// 0	1	1	2	3	5	8	13	21	34 ......
#include<stdio.h>
int main()
{
int n,m;

//how many numbers you want enter here
printf("how many number you want : ");
scanf("%d",&n);

//assignment of variables
a = 0;
b = 1;

//process and print fibonacci number
for(m=0;m<n;m++)
{
printf("%d\t",a);
c=a+b;
a=b;
b=c;
}
return 0;
}
