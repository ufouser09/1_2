//Lineer sort with counting
//Benden k���k K say� varsa benim yerim k+1�dir
//�ki kat h�zlandiralim
#include <stdio.h>
int main()
{
	int dizi[10],dizi2[10];
	static int k[10];
	int i,j,n;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&dizi[i]);
	
	for (i=0;i<n;i++)
		//for (j=0;j<i;j++) //bu da olabilir
		for (j=i+1;j<n;j++)
			if (dizi[i]>dizi[j])
				k[i]++;
			else
				k[j]++;
				
	for (i=0;i<n;i++)
		dizi2[k[i]]=dizi[i];
	
	for (i=0;i<n;i++)
		printf("%d ",dizi2[i])	;
	
	return 0;

}
