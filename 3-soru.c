#include<stdio.h>
#include<stdlib.h>
main(){
	int a,b,toplam;
	printf("**********************MUKEMMEL SAYI HESAPLAYICI*********************\n");
	for(a=5;a<=15000;a++){
		toplam=0;
		for(b=1;b<a;b++){
			if(a%b==0){
				toplam+=b;
			}	
		}
		if(a==toplam){
			printf("%d\n",a);
		}
	}
	return 0;
}
