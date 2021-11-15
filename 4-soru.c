#include<stdio.h>
main(){
	double toplam,k,a;
    int i,j,x;
    printf("x degerini giriniz=");
    scanf("%d",&x);
    toplam=1;
    for(i=1;i<=15;i++){
    	a=1;
    	for(j=i;j>=2;j--){
    	a=a*j;}
		k=x;
		if(i!=1){
		for(j=2;i>=j;j++){
		k=(x*k);}}
		toplam+=k/a;
		printf("%d.sonuc=%f\n",i,toplam);}
	printf("program sonlandi");
	return 0;
	}
    

