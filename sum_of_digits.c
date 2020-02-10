//wap to get sum of all the digits of number[sum_of_digits.c]
#include<stdio.h>
int main()
{
    int number,count=0,main_num,sum;

    
    //get number from user
    printf("Enter number : ");
    scanf("%d",&number);
    main_num =  number;
    sum=0;
    //processing
    while(number != 0)
    {
        
        sum=sum+(number%10);
        number = number/10;
    }
    //result 
    //using & we can pass the address of the variable
    printf("sum of all the digits %d is %d",main_num,sum);
    
}
