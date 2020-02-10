//wap to count digits in a number[count_num_digits.c]
#include<stdio.h>
int main()
{
    int number,count=0,main_num;

    
    //get number from user
    printf("Enter number : ");
    scanf("%d",&number);
    main_num =  number;
    
    //processing
    while(number != 0)
    {
        count++;
        number = number/10;
    }
    //result 
    //using & we can pass the address of the variable
    printf("number of digit %d is in %d",count,main_num);
    
}
