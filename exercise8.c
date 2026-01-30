//if语句
#include <stdio.h>
int main()
{
    int hour1,minute1;
    int hour2,minute2;
    printf("时间1是多少小时多少分钟？时间2是多少小时多少分钟？");
    scanf("%d %d %d %d",&hour1,&minute1,&hour2,&minute2);
    int hour=hour2-hour1;
    int minute=minute2-minute1;
    if(minute<0)
    {
        hour=hour-1;
        minute=minute+60;
    }
    printf("时间差是：%dhours%dminutes",hour,minute);
    return 0;
}