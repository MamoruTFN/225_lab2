#include<stdio.h>
int main()
{
    char b[1000000];
    scanf("%s",b);
    for (int i=0;b[i];i++)
    {

        if(b[i]=='0')
        {
            printf("Zero");
        }
        else if(b[i]=='1')
        {
            printf("One");
        }
        else if(b[i]=='2')
        {
            printf("Two");
        }
        else if(b[i]=='3')
        {
            printf("Three");
        }
        else if(b[i]=='4')
        {
            printf("Four");
        }
        else if(b[i]=='5')
        {
            printf("Five");
        }
        else if(b[i]=='6')
        {
            printf("Six");
        }
        else if(b[i]=='7')
        {
            printf("Seven");
        }
        else if(b[i]=='8')
        {
            printf("Eight");
        }
        else if(b[i]=='9')
        {
            printf("Nine");
        }
        if(i<b[i+1])
        {
            printf("-");
        }
    }

    return 0;
}
