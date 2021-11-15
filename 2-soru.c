#include<stdio.h>
#include<time.h>
int main(){
	int sayi,i,a;
	printf("******************SAYI TAHMIN ETMECE***********************\n");
	srand(time(NULL));
	sayi=rand() %100+1;
	for(i=1;i<=6;i++){

		printf("%d. tahmini giriniz:",i);
		scanf("%d",&a);
		if(sayi==a){
			printf("Tebrikler sayiyi buldunuz.");
			break;
		}
		else if(sayi<a){
			printf("Girdiginiz sayi buyuktur.\n");
			printf("%d. tahmin hakkiniz kaldi.\n",6-i);
		}
		else{
			printf("Girdiginiz sayi kucuktur\n");
			printf("%d. tahmin hakkiniz kaldi\n",6-i);
		}
	}
	printf("\nprogram sonlandi");
}
