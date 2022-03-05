 #include<stdio.h>
 float area(float a,float b)

 {
     return 0.5*a*b;
 }
 int main()
 {
     float x,y,result;

      printf("Enter the hight : ");
      scanf("%f",&x);
       printf("Enter the base : ");
      scanf("%f",&y);
      printf("area of triangle  is :%f",area(x,y));
 }
