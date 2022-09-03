#include<stdio.h>

int main()
{
    int a,b;
    a = 10;
    b = 20;
    printf("Before swapping the numbers are\nA = %d\nB = %d\n", a, b);
    b = a+b-(a=b);
    printf("After swapping the numbers are\nA = %d\nB = %d\n", a, b);
    return 0;
}

/*
    Explanation how the logic works
    First print this -> a = 10 b = 20
    then,
    30 - 20
    b = 10
    a = 20

*/
