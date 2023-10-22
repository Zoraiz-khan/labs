#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
   { printf("Usage: %s base height \n",argv[0]);
    return 1;
   }

   double base = atof(argv[1]);
   double height =atof(argv[2]);
   double area = 0.5*base*height;

   printf("Area of triangle with base %.2lf and height %.2lf is %.2lf\n",base,height,area);

   return 0;

}