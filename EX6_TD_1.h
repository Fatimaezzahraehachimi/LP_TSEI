int EX6_TD_1(){
	float prix_unitaire;
	int Q;
	printf("entrer le prix unitaire ainsi que le nb d'unité que vous achetez :\n");
	scanf("%f%d", &prix_unitaire, &Q);
	float som =prix_unitaire * Q;
	if(som > 200){printf("la valeur final est :\n%.2f\n", som + 25);}
	else{printf("la valeur final est :\n%.2f\n", som);}
