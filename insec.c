#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[20],b[20],c[20],n1,n2,i,j,k=0;
	printf("Enter the number of elements of A\n");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",a[i]);
	printf("Enter the number of elements of B\n:");
	scanf("%d",&n2);
	for(i=0;i<n1;i++)
	scanf("%d",b[i]);
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j]){
				c[k]=a[i];
				k++;
			}
		}
	}
	printf("Intersection of set A and B is:\n");
	for(i=0;i<k;i++)
	printf("%d",c[i]);
	return 0;	
}