//逻辑量与逻辑运算
//判断是不是大写字母
//！》&&》||
//短路：
#include <stdio.h>
int main(){
    int a=-1;
    if(a>0&&a++>1){
        printf("ok\n");
    }
    printf("%d\n",a);//a输出-1，因为&&如果前面不符合，后面就不会运算，后半部分被短路了
    return 0;
}