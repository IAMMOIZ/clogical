//swap two number by using thiered variable
#include<stdio.h>
int main()
{
int a,b,temp;

//get first number from user
printf("Enter first number : ");
Scanf("%d",&a);

//get first number from user
printf("Enter second number : ");
Scanf("%d",&b);

//main logic of swapping 
temp = a;
a = b;
b = temp;

//print swapped number 
printf("first number is : %d \n",a);
printf("second number is : %d ",b);

return 0;
}
