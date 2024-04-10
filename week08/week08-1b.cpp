#include <stdio.h>
int main()
{
    for(int i=1;i<=9;i++)///左手i
    {
        for(int j=1;j<=9;j++)///右手j
        {
            printf("*");
        }
        printf("i:%d\n",i);
    }
}
