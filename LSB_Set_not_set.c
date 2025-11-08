//Write a C program to check Least Significant Bit (LSB) of a number is set or not.
#include<stdio.h>
#include<stdbool.h>

bool isLsb(int a)
{
   
    if(a&1) return true;
    return false;
}

int main()
{
    int a ;
    printf("Enter Integers: ");
    scanf("%d", &a);
    if(isLsb(a))
    {
        printf("Lsb is set");
    }
    else{
        printf("Lsb is not set");
    }
    return 0;
}