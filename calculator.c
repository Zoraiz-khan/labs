#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double a,b,result;
    int choice;
    printf("enter operand a:");
    scanf("%lf",&a);
    printf("enter operand b:");
    scanf("%lf",&b);
    printf("enter operation:\n(1)addition\n(2)subtraction\n(3)multiplication\n(4)division\n(5)minimum\n(6)logrithm");
    scanf("%d",&choice);
    if (choice==1)
    {
        result=a+b;
        printf("result: %f",result);
    }
    else if(choice==2)
    {
        result=a-b;
        printf("result: %f",result);
    }
    else if(choice==3)
    {
        result=a*b;
        printf("result: %f",result);
    }
    else if(choice==4)
    {
        if (b !=0)
        {
            result=a/b;
            printf("result: %f",result);
        }
    
    else
     {
        printf("result: division by zero is not aalowed\n");
    }
    }
    else if(choice==5)
    {
        result=(a<b)?a:b;
        printf("result: %f\n",result);

    }
    else if(choice==6)
    {
        if(a>0 && b>0)
        {
            result=log(b)/log(a);
            printf("result:%f",result);
        
        }
        else {
        printf("both operands must be positive");
        }
    }

return 0;

}
