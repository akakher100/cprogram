// Write a program to check whether a number is even or odd using both modulo and bitwise operators. 

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to check even odd:");
    scanf("%d",&n);

    // using module
    if(n%2==0)
        printf("Even\n");
    else
        printf("Odd\n");

    //using bitwise operator
    if(n & 1)
        printf("Odd");
    else
        printf("Even");

    return 0;
}
