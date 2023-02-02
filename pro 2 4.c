#include<stdio.h>


main(){
	char a;
	
	printf("enter value :");
	scanf("%c",&a);
	
	switch(a){
		
		case 'm':
         printf("monday");			
	      break;
	      
	     case 't':
         printf("tuesday");			
	      break; 
	      
         case 'w':
         printf("wednesday");			
	      break; 
		  case 'th':
         printf("thursday");			
	      break;
		  case 'f':
         printf("friday");			
	      break;
		  
		  case 's':
         printf("saturday");			
	      break;
		  case 'sun':
         printf("sunday");			
	      break;	
	} 
}
