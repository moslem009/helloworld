//largest between two numbers   and returns the smallest    
//open a file   



#include <stdio.h>
#include <stdlib.h>
#include <math.h>       

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("The smallest between %d and %d is %d\n",a,b,a+b);
    return 0;
}