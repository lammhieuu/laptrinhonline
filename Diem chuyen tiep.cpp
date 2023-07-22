#include<stdio.h>
#include<math.h>
int main(){
	int n,k,d1,d2;
	scanf("%d",&n);
	int a[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++){
		if(a[i]==0) d1++;
		if(a[i]==1) d2++;
		if(a[i]==0 && a[i+1]==1) k=i;
	}
	if(d1>0 && d2>0) printf("%d",k);
	if(d1==0) printf("0");
	if(d2==0) printf("-1");
return 0;
}

