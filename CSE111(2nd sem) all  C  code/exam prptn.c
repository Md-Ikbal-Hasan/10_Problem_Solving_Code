
#include<stdio.h>
float area (float r)
{
    float result =3.1416*r*r;
    return result;
}
int main(void)
{
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);

    printf("area of triangle is: %f",area(radius));

}
