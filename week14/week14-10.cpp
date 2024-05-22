#include <stdio.h>
char line[100];
int main()
{
	
	int n;
	int ans=0;
	while(scanf("%d",&n)==1)
	{
		if(n==0) break;
		ans++;
	}
	printf("%d",ans);
}