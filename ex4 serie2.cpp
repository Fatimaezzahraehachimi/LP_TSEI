#include<stdio.h>
main()
{
	int A;
	printf("entrer un nbr A : ");
	scanf("%d",&A);
	printf("l'equivalent en hexa de A est :");
	if(A>=0 && A<=15)
	{
	    if(A<10)
	  {
	  	printf("A=%d",A);
	  }
	    else if(A>10)
	    {
	    	if(A==10)
			printf("A");
			else if(A == 11) 
		     printf("B\n");
			else if(A == 12)
			 printf("C\n");
			else if(A == 13)
			 printf("D\n");
			else if(A == 14) 
			printf("E\n");
			else printf("F\n");
		}
   }
   else 
   printf("erreur de saisie");
	  
}
