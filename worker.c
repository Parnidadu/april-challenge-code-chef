#include<stdio.h>
int main(){
	//this is aprogram for the first question of april challenge //in code chef//
	int n,p[10000],t[10000],i,pr1=10000,pr2=10000,pr3=10000,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&p[i]);
	for(i=0;i<n;i++)
	scanf("%d",&t[i]);
	for(i=0;i<n;i++){
		if(t[i]==1)
			if(p[i]<=pr1)
			pr1=p[i];
			}
	for(i=0;i<n;i++){
		if(t[i]==2)
			if(p[i]<=pr2)
			pr2=p[i];
			}
	for(i=0;i<n;i++){
		if(t[i]==3)
			if(p[i]<=pr3)
			pr3=p[i];
			}
		j=pr1+pr2;
		if(pr3<=j)
		printf("%d",pr3);
		else
		printf("%d",j);					
		return 0;
	}
