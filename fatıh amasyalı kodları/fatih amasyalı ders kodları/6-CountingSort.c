// Counting sort yapan program� yazal�m
// Ayn� elemandan birden fazla kez varsa?
#include <stdio.h>
int main()
{
	int dizi[10],dizi2[10];
	static int k[10];
	int i,j,n,max=0;
	printf("eleman sayisini veriniz\n");
	scanf ("%d",&n);
	printf("elemanlari veriniz\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&dizi[i]);
		if (dizi[i]>max)
			max=dizi[i];
	}
	for (i=0;i<n;i++)
		k[dizi[i]]=1;
	
	j=0;
	for (i=0;i<=max;i++)
		if (k[i]!=0)
		{
			dizi2[j]=i;
			j++;
		}
		
		
	for (i=0;i<n;i++)
		printf("%d ",dizi2[i])	;
	
	return 0;

}
