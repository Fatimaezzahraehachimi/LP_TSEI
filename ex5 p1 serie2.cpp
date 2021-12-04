#include<stdio.h>
main()
{
	int nbrs[25],min,i;
	printf("entrer 25 nbrs:");
	scanf("%d",&nbrs[0]);
	min=nbrs[0];
	for(i=1;i<25;i++)
	{
	
	scanf("%d",&nbrs[i]);
	if(nbrs[i]<min)
	{
		min=nbrs[i];
	}
	
   } printf("min=%d",min);   
  
	
}
