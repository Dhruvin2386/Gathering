#include<stdio.h>

int sum(int a,int b,int c){
	
	return ((b*b)-(4*a*c))/(2*a);
}
int main(){
	
	int a,b,c,result;
	
	printf("Enter the value of a=");
	scanf("%d",&a);
	
	printf("Enter the value of b=");
	scanf("%d",&b);
	
	printf("Enter the Value of c=");
	scanf("%d",&c);
	
	result=sum(a,b,c);
	printf("Answer %d\n",result);
	
}