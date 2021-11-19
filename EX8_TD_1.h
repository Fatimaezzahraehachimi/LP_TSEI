int EX8_TD_1{
	int nb_article, remise = 0;
	float prix_unitaire, prix_modifié, som;
	printf("Please enter the number of articles then the unit price :\n");
	scanf("%d%f", &nb_article, & prix_unitaire);
	som = nb_article *  prix_unitaire;
	som += som * 0.2;
	if(som > 1000){
		remise = 5;
	}
	prix_modifié = som - ((som * remise)/100);
	printf("prix TTC est :%.2fDH\n la remise est :%d %%\n prix final est :%.2fDH\n", som, remise, prix_modifié);
}
