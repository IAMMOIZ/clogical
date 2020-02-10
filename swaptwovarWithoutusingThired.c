//swap two number by without using thiered variable
#include<stdio.h>
int main()
{
int a,b;

//get first number from user
printf("Enter first number : ");
scanf("%d",&a);

//get first number from user
printf("Enter second number : ");
scanf("%d",&b);

//main logic of swapping 
a = a + b;
b = a - b;
a = a - b;

//print swapped number 
printf("first number is : %d \n",a);
printf("second number is : %d ",b);

return 0;
}
