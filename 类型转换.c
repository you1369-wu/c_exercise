//自动类型转换：
//1.当运算符的两边出现不一致的类型时，会自动转换成较大的类型（大是指能表达的数的范围更大）
//char（1byte）-short（2byte）-int（跟不同计算机有关，通常是32位，4byte）-long-longlong
//int-float-double
//2.对于printf来说，任何小于int的类型转换成int；float自动转换成double（因此输出时double的数据时只要写%f而不是%lf，因为会自动把float转成double）
//3.对于scanf来说1，没有自动转换，必须严格根据赋给的变量来写%，比如char c；scanf（“%c”，c）或者先把数字赋给int i；再c=i，再输出c


//强制类型转换：通常是往小了转
//（类型）值
//(int)10.2   (short)32
//注意安全性，小的变量不总是能表达大的 eg：(short)32768  short最多表示2的15次方-1，即32767

/*
#include <stdio.h>
int main(){
    printf("%d\n",(short)32768);//short能表达到32767，再往上就得用补码来解释了
    return 0;
}
//强制类型转换只是从变量计算出一个新的类型值，它并不改变那个变量，无论是值还是类型都不改变
#include <stdio.h>
int main(){
    printf("%d\n",(short)32768);//short能表达到32767，再往上就得用补码来解释了
    return 0;
    int i=32768;
    short s=(short)i;//需要建立一个新变量来存储类型转换后的变量
    printf("%d\n",i);
}
*/
//强制类型转换优先级比四则运算高
#include <stdio.h>
int main()
{
double a=1.0;
double b=2.0;
//int i=(int)a/b;
int i=(int)(a/b);
printf("%d",i);
return 0;
}