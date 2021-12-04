#include<stdio.h>
main()
{
	int N ,i;
	printf("entrer un nbr N :");
	scanf("%d",&N);

	int impaire=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&N);
		if(N%2!=0)
		{
			impaire++;
		}
		else if(N<0)
		{
			break;
		}
	}
	printf("les nbres impaire=%d",impaire);
	
}
