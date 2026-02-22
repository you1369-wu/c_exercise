//将数据类型为char的字符进行大小写转换
#include <stdio.h>
int main(){
    /*char c;
    printf("输入一个小写字符，我把它转换成大写：\n");
    scanf("%c",&c);
    c=c+'A'-'a';
    printf("大写字母为%c\n",c);*/
   
    char i;
    printf("输入一个大写字符，我把它转换成小写：\n");
    scanf("%c",&i);
    i=i+'a'-'A';
    printf("小写字母为%c\n",i);
    return 0;
} 