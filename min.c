
#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);
    if(n1 > n2)
    {
        printf("minimum is %d", n1);        
    }
    if(n2 > n1)
    {
        printf("minimum is %d", n2);
    }

    if(n1 == n2)
    {
        printf("equal");
    }

    return 0;
}