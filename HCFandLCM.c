//code to find HCF and LCM of two numbers

#include<stdio.h>

int main()
{
	int n1,n2,H=1,L=1,i,max;
	scanf("%d %d",&n1,&n2);

	//making n2<n1
	if(n1<n2)
	{
		n1=n1+n2;
		n2=n1-n2;
		n1=n1-n2;
	}
	max=n1;

	for(i=1;i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			H=i;
		}
	}
	if(n1%n2==0)
		L=n1;
	else
	{
		while(1)
		{
			max++;
			if(max%n1==0 && max%n2==0)
			{
				L=max;
				break;
			}
		}
	}
	printf("HCF=%d\nLCM=%d",H,L);
	return 0;
}
