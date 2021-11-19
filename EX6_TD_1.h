int EX6_TD_1(){
    int Q,FT;
    float P=23.0, M;
    system("Color F0");
    printf("quantite:");
    scanf("%d",&Q);
    M=Q*P;
    printf("Le montant de la facturation est :%2.f DH",M);
    if (M<200){
        M=M+FT;
        printf("Le montant de la facturation est :%2.f DH",M);
    }
}
