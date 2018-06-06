#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int n,k;
	scanf("%d %d",&n,&k);
	vector<int> est,copia;
	for(int i = 0; i < n; i++){
		int num;
		scanf("%d",&num);
		est.push_back(num);
	}
	copia = est;
	int cont = 0;
	int sw = false;
	sort( est.begin(), est.end() );
	est.erase( unique( est.begin(), est.end() ), est.end() );

	/*for(int i = 0; i < est.size(); i++){
		printf("%d ",est[i]);
	}*/

	if(est.size() >= k){
		printf("YES\n");
		int index = 0;
		while(index <k){
			for(int i = 0; i < n; i++){
				if(est[index] == copia[i]){
					printf("%d ",i+1);
					index++;
					break;
				}
			}
		}
	}
	else{
		printf("NO");
	}

	return 0;
}