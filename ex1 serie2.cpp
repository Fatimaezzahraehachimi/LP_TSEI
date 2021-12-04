#include<stdio.h>
main()
{
int Sargent;
	int billOf100 = 0;
	int billOf50 = 0;
	int billOf10 = 0;
	int billOf5 = 0;
	int billOf1 = 0;
	printf("entrer une somme d'argent :\n");
	scanf("%d", &Sargent);
	while(Sargent >= 0){
		if(Sargent >= 100)
		{
			Sargent -= 100;
			billOf100++;
		}
		else if(Sargent >= 50)
		{
			Sargent -= 50;
			billOf50++;
		}
		else if(Sargent >= 10
		){
			Sargent-= 10;
			billOf10++;
		}
		else if(Sargent >= 5) 
		{
		Sargent-= 5;
			billOf5++;
		}
		else if(Sargent >= 1)
		{
			Sargent -= 1;
			billOf1++;
		}
		else{break;}
	}	
}

