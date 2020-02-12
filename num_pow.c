//calculate the power of a number
#include<stdio.h>
int main()
{
    //declare variables
    int num,power;
    
    //get number from user
    printf("Enter number : ");
    scanf("%d",&num);
    
    //get power from user
    printf("Enter power : ");
    scanf("%d",&power);
    
    //call function 
    int result = getPower(num,power);
    
    //print result
    printf("result : %d",result);
    
    
}

//calcule power of number
int getPower(int num, int power)
{
    int i,res=1;
    for(i=1;i<=power;i++)
    {
        res = res * num;
    }
    return res;
}
