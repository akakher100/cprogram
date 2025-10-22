//Write a program to calculate area and perimeter of rectangle, circle, and triangle. 

#include <stdio.h>
int main()
{
    int choice;
    float height, weight, area, perimeter, radius, base, side1, side2, side3;

    printf("Enter the height and weight of Rectangle: ");
    scanf("%f%f", &height, &weight);
    area = height * weight;
    perimeter = 2 * (height + weight);
    printf("\n  Are of Rectangle: %.0f",area);
    printf("\n  Perimeter of Rectangle: %.0f\n",perimeter);

    printf("\nEnter the Radius of Circle: ");
    scanf("%f",&radius);
    area = 3.1416 * radius * radius;
    perimeter = 2 * 3.1416 * radius;
    printf("\n  Area of Circle: %.2f", area);
    printf("\n  Perimeter of Circle: %.2f\n", perimeter);

    printf("\nEnter the Base and Height of Triangle: ");
    scanf("%f%f",&base, &height);
    area = 0.5 * base * height;
    printf("\n  Area of Triangle: %.2f\n",area);
    printf("\nEnter the three side of triangle: ");
    scanf("%f%f%f",&side1,&side2,&side3);
    perimeter = side1 + side2 + side3;
    printf("\n  Perimeter of Triangle: %.2f\n",perimeter);

    return 0;
}

