#include<stdio.h>
int main()
{
    char a;
    int n=0,cn;
    scanf("%c",&a);
    scanf("%d",&n);
    cn =a-n;
    if (n%10==5)
        printf("%c",92);
    if (cn%2==0)
    {
        if (a >=65 && a <= 73)
        {
            printf("{@_@}");
        }
        else if(a >=74 && a <= 82)
        {
            printf("{*v*}");
        }

        else if(a >=83 && a <= 90)
        {
            printf("{x_x}");
        }

    }

    else
    {
        if (a >=65 && a <= 73)
        {
            printf("(^_^)");
        }

        else if(a >=74 && a <= 82)
        {
            printf("(*o*)");
        }

        else if(a >=83 && a <= 90)
        {
            printf("(T_T)");
        }

    }
    if (n%10==5)
        printf("/");

    return 0;
}
