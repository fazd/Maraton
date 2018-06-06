#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int  n,k;
	scanf("%d %d",&n,&k);
	
	for(int i = 0; i < k; i++){
		int dig = n%10;
		if(dig == 0){
			n/=10;
		}
		else{
			n--;
		}
	}
	printf("%d\n",n);

	return 0;
}