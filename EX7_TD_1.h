int EXERCICE_7_SERIE_1(){
    int a,b,c,max;
    printf(" Entrer deux entiers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
        max=a;
        if(c>max)
            max=c;
        }else {
            max=b;
        if(c>max)
            max=c;
        }
    printf("la valeur la plus grande est \n%d\n",max);
}
