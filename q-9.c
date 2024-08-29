#include<stdio.h>

void oddoreven(int num){
	if(num%2 ==0){
		printf("%d is an even.\n",num);
	}else{
		printf("%d ia an Odd.\n",num);
	}	
}
 
 int main(){
	
	int num;
	
	printf("Enter the Number=");
	scanf("%d",&num);
	
	oddoreven(num);
}
	