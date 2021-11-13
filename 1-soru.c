#include<stdio.h>
main(){
	int i,j;
	
    for(i=1;i<=19;i++){
 	if(i==1){
 		printf("\t\t\t");
 	for(j=19;i<=j;j--){
	 	printf(" ");
	 }
 	for(j=1;j<=i;j++){
 		printf("*");
	 }
     }
    else
    {
	printf("\t\t\t");
	for(j=19;i<=j;j--){
	 	printf(" ");
     }
 	for(j=1;j<=i;j++){
 		printf("*");
	 }
	for(j=2;j<=i;j++){
 		printf("*");
	 }	
}	
	 printf("\n");
 }	
}
