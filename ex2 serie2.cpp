#include<stdio.h>
#include<math.h>

main()
{
	float PA, CA, Fr,FV,HT,TVA,TTC;
	char type ;
	printf("entrer le type de produit:");
	scanf("%s",&type);
	printf("entrer le PA:");
	scanf("%f",&PA);
	if(PA>9000)
    	{
    		Fr=(4*PA)/100;
    	}
    else if (PA>5000 && PA<9000)
        {
        Fr=(6*PA)/100;	
     	}
     else if(PA>2000 && PA<5000 )
        {
        Fr=(8*PA)/100;	
     	}
    else
        {
        Fr=(1*PA)/100;	
     	}
    printf("Fr:%d",Fr);
	CA=PA+Fr;
	
	FV=(10*CA)/100;
	printf("CA:%d",CA);
	
	if (type=='X' || type=='x')
	  {
	  	TVA=30./100;
	  }
	else if (type=='Y' || type=='y')
	  {
	  	TVA=38./100;
	  }
    else if (type=='Z' || type=='z')
	  {
	  	TVA=43./100;
	  }
	else if (type=='T'|| type=='t')
	  {
	  	TVA=46./100;
	  }
	else if (type=='U' || type=='u')
	  {
	  	TVA=49./100;
	  }
	HT=CA+FV;
	TTC=HT+HT*TVA;
}
	  
	
	

	
		

