#include<stdio.h>

main(){
  char a;
  printf("enter:");	
  scanf("%c",&a);
 if(a>='a'&& a<='z'){
	printf("this is alphabet");
}
else if(a>='0'){
	printf("this is number");
}
else{
	printf("this is special character");
}

	
	
}
