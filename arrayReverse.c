//reverse a number 
#include<stdio.h>
int main()
{
int num,newNumber,remainder;

//get first number from user
printf("Enter a number : ");
scanf("%d",&num);

//processing for reverse number
while(num!=0)
{
remainder = num % 10;
newNumber = (10*newNumber) + remainder;
num = num/10;
}

//print reverse number
printf("%d",newNumber);
return 0;
}
