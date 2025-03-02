//add include statements
#include "repetition.h"
//add function(s) code here

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int gcd(int num1,int num2)
{
    int x;
    while(num1 != num2)
    {
        if(num1<num2)
        {
            x = num1;
            num1 = num2;
            num2 = x;
        }
        if(num1>num2)
        {
            num1 -= num2;
        }
    }
    return num1;
}