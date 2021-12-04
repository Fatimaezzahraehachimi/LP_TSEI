#include<stdio.h>
main()
{
	int N ,val[N], i , som;
	printf("entrer un nbr entier N :");
	scanf("%d",&N);
	printf("entrer les N valeurs:");
	scanf("%d",&val[N]);
	som=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&val[i]);
		som=som+val[i];
		
	}
	printf("som=%d",som);
	
}
