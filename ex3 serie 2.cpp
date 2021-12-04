#include<stdio.h>
main()
{
	int age , IMPO ;
	char sexe; 
	char situationf;
	
	printf("enter l'age :");
	scanf("%d",&age);
	
	printf("enter le sexe(H/F):\n");
	scanf("%s",&sexe);
	
	printf("enter la situationf(C/M)  :\n");
	scanf("%s",&situationf);
	if(sexe=='H')
	{
         if((age<20 && situationf=='C')|| (age>70 && situationf=='M'))
	    {
	 		IMPO=0;
     	}
     }
	else if(sexe=='F') 
	   {
		 if(( age<22 && situationf=='C')||(age>55 && situationf=='M'))
	   {
			IMPO=0;
	   }
	}
	else
	{
		IMPO=1;
	}
	
}
