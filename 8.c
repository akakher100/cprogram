// Write a program to swap two numbers without using a temporary variable 

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter two number to swap\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\na = %d",a);
    printf("\nb = %d",b);
    return 0;
}
