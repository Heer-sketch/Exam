#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter 2 no:\n");
    printf("a= ");
    scanf("%d",&a);
    printf("b= ");
    scanf("%d,&b");

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swapping:\n");
    printf("a= %d\n",a);
    printf("b= %d\n",b);

    return 0;
}
