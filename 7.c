// Write a program to swap two numbers using a temporary variable 

#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter two number to swap\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("\na = %d",a);
    printf("\nb = %d",b);
    return 0;
}
