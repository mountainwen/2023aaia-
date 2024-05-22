#include <stdio.h>
int main()
{
    int a=5;
    ///if(a>0){ ///if (判斷)只做一次，實驗完後住解
    ///    printf("a:%d\n",a);
    ///}
    ///while(a>0){///while(迴圈)會一直做
    ///    printf("a:%d\n",a);
    ///}
    ///while(1) printf("a:1\n");///請問這行執行時會印東西嗎?
    if(999) printf("999成立\n");
    if(3) printf("3成立\n");
    if(2) printf("2成立\n");
    if(1) printf("1成立\n");
    if(0) printf("請問0成立嗎?\n");///就只有0不成立
    if(-1) printf("-1成立\n");///其他全部都成立
    if(-2) printf("-2成立\n");
    if(-3) printf("-3成立\n");
}