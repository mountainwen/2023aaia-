#include <stdio.h>
int main()
{
    printf("請輸入大小:");
    int n;
    scanf("%d",&n);///有n個星星
    for (int i=1;i<=n;i++)
    {
        int star=n;
        for (int k=1;k<=star;k++)printf("*");

        printf("\n");
    }
}