//Write a program to compute simple interest and compound interest. 

#include<stdio.h>
int main(){

    int principal, rate, time, i;
    float si, ci;
    printf("Enter PrinciPal: ");
    scanf("%d",&principal);
    printf("Enter Rate: ");
    scanf("%d",&rate);
    printf("Enter Time: ");
    scanf("%d",&time);

    si = (principal*rate*time)/100;
    printf("\nSimple Interest: %.2f", si);

    ci = principal;
    for(i=1; i<=time; i++){

        ci = ci + (ci*rate/100);
    }
    ci -= principal;
    printf("\nCompound Interest: %.2f", ci);
}
