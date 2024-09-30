#include<stdio.h>
#include<stdlib.h>
int euclid(int a,int b){
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main(){
	int a,b;
	printf("Enter the value of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("GCD(%d %d)=%d",a,b,euclid(a,b));
	return 0;
}