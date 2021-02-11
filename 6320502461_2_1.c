#include<stdio.h>
int main()
{
    unsigned int a,b,c,t=0;
    scanf("%d",&a);
    if(a>=0&&a<31)
    {
        scanf("%d",&b);
        if(b>=0&&b<31)
        {
            scanf("%d",&c);
            if(c>=0&&c<41)
            {
                t=a+b+c;
                if(t>79&&t<101)
                {
                    printf("A");
                }
                else if(t>74&&t<80)
                {
                    printf("B+");
                }
                else if(t>69&&t<75)
                {
                    printf("B");
                }
                else if(t>64&&t<70)
                {
                    printf("C+");
                }
                else if(t>59&&t<65)
                {
                    printf("C");
                }
                else if(t>54&&t<60)
                {
                    printf("D+");
                }
                else if(t>49&&t<55)
                {
                    printf("D");
                }
                else if(t>=0&&t<50)
                {
                    printf("F");
                }
            }

        }

    }



    return 0;
}
