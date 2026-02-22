//ASCII编码
/*
#include <stdio.h>
int main(){
    int i=0;
    char c;
    scanf("%d",&i);//扫进来一个数字
    c=i;
    printf("c的编码是%d,c在ASCII中表示的是%c",c,c);//根据这个数字索引对应的编码找到表示的内容
    return 0;
}
*/



/*查看字符对应编码
#include <stdio.h>
int main(){
    int i=0;
    char c;
    scanf("%c",&c);//扫进来一个字符character,对于c来说数值是49，字符是1
    i=c;
    printf("c的编码是%d,c在ASCII中表示的是%c",c,c);//根据这个字符反推其编码数字
    printf("i=%d",i);
    return 0;
}
*/

/*
//两种相等的对char数据赋值的方法
//方法1
#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    printf("c的编码是%d,c在ASCII中表示的是%c",c,c);
    return 0;
}
//方法2
#include <stdio.h>
int main(){
    char c;
    int i;
    scanf("%d",&i);
    c=i;
    printf("c的编码是%d,c在ASCII中表示的是%c",c,c);
    return 0;
}
*/


//空格的读入
#include <stdio.h>
int main(){
    char c;
    int i;
    scanf("%d %c",&i,&c);//读完第一个整数赋给i以后，把空格读完，再把另一个数赋给c
   //scanf("%d%c",&i,&c);//读完第一个整数赋给i以后立刻读第二个数
    printf("i=%d,c=%d,c='%c'",i,c,c);
    return 0;
}