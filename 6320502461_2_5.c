#include<stdio.h>

int main()
{
    int day,month,ans;
    scanf("%d %d",&day,&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        ans=(31+day)%7;
    }
    else if(month==4||month==6||month==9||month==11)
    {
        ans=(30+day)%7;
    }
    else if(month==2)
    {
        ans=(28+day)%7;
    }
    if(ans==0)
    {
        printf("7");
    }
    else
    {
        printf("%d",ans);
    }


    return 0;
}
