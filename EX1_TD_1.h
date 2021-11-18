int EX1_TD_1(){
  int Q;
  float prix_un;
  printf("entrer le prix un\n");
  scanf("%f",&prix_un);
  printf("entrer la quantité commander\n");
  scanf("%d",&Q);
  float prix_final=(Q*prix_un)+(Q*prix_un)*0.2;
  printf("prix_final :\n%.2f\n",prix_final);
  }
