#include<stdio.h>
#include<stdlib.h>
int main(){
	int a=17,c=43,m=2000,x0=27,x,n,i;
	printf("Enter the numbers of random number:");
	scanf("%d",&n);
	x=x0;
	for(i=0;i<=n;i++){
		x=(a*x+c)%m;
		printf("\t%d",x);
	}
	return 0;
}