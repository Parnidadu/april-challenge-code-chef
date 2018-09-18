//magician versus chef
#include<stdio.h>
void main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		int n,x,s,pos1,pos2,temp;
		scanf("%d",&n);
		scanf("%d",&x);
		scanf("%d",&s);	
		for(int i=0;i<s;i++){
			scanf("%d%d",&pos1,&pos2);
			if(pos1==x)
				x=pos2;
			else if(pos2==x)
				x=pos1;	
			else
				continue;
			}
		printf("%d\n",x);
		}
	}

