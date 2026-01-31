//嵌套if-else一定要加花括号
//成绩评定
 #include <stdio.h>
 
 int main()
 {
    int score=0;
    printf("请输入成绩：");
    scanf("%d",&score);
    if(score>100 ||score<0)
    {
        printf("输入错误。\n");
    }
    else{
        if(score>=90){
            printf("优秀\n");
        }
        else{
            if (score>=80){
                printf("良好\n");
            }
            else{
                printf("还需努力。\n");
            }
        }
        }
    return 0;
}
