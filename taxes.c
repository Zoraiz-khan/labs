#include <stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
    double agi = 0.0;
    char c = 'N';
    double tax = 0.0;
    double childcredit = 0.0;
    double totaltax = 0.0;
    int numchildren = 0;

    printf(" Please enter your adjusted gross income:\n");
    scanf("%lf",&agi);
    getchar();
    printf("do you have any children? (Y) or (N)?");
    c = getchar();
    if (c=='y'|| c=='n')
   { printf("how many children do you have:");
    scanf("%d",&numchildren);

}
