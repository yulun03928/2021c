#include <stdio.h>
int main ()
{
	int a;
	scanf("%d",&a);
	int ans=0;
	for(int i=1;i<=a;i++)
	{
		ans += i*i;

	}
	printf("%d",ans);
}
