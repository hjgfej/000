#include<stdio.h>

main(){
	int a,b,c,d;
  printf("enter a:");	
  scanf("%d",&a);
  
  printf("enter b:");	
  scanf("%d",&b);
  
  
  printf("enter c:");	
  scanf("%d",&c);
  
  
  printf("enter d:");	
  scanf("%d",&d);
 if(a<b){
 	if(c<b){
        if(d<b){
        	printf("b is max");
		} 	
		else{
			printf("d is max");
		}	
	 }
	 else{
	 	if(c<d){
	 	 printf("d is max");	
		 }	
		else{
			printf("c is max");
		} 
	 }
 }
 else{
 	if(a<d){
 		printf("d is max");
	 }
 	printf("a is max");
 }
	
}
	
	

