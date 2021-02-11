#include<stdio.h>
int main()
{
    int m=0,s=0;
    float t,c=0,p=0,sum=0;
    char pro;
    scanf("%c",&pro);
    scanf("%f",&t);
    m=t;
    t*=100;
    s=t;
    s=s%100;
    if(pro=='A')
    {
        p=199;
        if(t>200)
        {

            m-=200;
            m*=60;
            sum=m+s;
            sum=sum/20;
            p+=sum;

        }
    }
    else if(pro=='B')
    {
        p=299;
        if(t>400)
        {

            m-=400;
            m*=60;
            sum=m+s;
            sum=sum/30;
            p+=sum;
        }
    }

    printf("%.2f",p);

    return 0;
}
