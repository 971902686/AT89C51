#include<stdio.h>
int main ()
{int i,j,a[6][6]={0};
 a[0][0]=1;
	for(i=1;i<=6;i++)
	{	a[i][0]=1;
		for(j=1;j<=i;j++)
		{a[i][j]=a[i-1][j-1]+a[i-1][j]; }
	}
	for(i=0;i<6;i++)
	{for(j=0;j<=i;j++)
	 {printf("%d",a[i][j]);
	  printf("   ");}
		printf("\n");}}