//wap to add two numbers in c by passing numbers to another function[add_two_num_function.c]
#include<stdio.h>
int main()
{
    int first , second;
    
    //get first number from user
    printf("Enter first number : ");
    scanf("%d",&first);
    
    //get second number from user
    printf("Enter second number : ");
    scanf("%d",&second);
    
    //result
    printf("addintion of %d and %d is %d",first , second ,sum(first,second));
    
}

int sum(int a, int b)
{
    return a+b;
}
