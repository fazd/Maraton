#include <bits/stdc++.h>

using namespace std;

//NO TERMINADO

bool dis (int a , int b){
	int distancia = fabs(b-a);
    if ( distancia <= 0 ) {
        return 0;
    }
    return ! (distancia & (distancia-1));
}


int main ()
{
	int n;
	int SIZE = 1073741824;
	scanf("%d ",&n);
	vector <int> vec (n,0);
	vector <int> dist (n,1);
	for(int i = 0; i < n; i++){
		scanf("%d",&vec[i]);
	}
	sort(vec.begin(),vec.end());
	int tam = vec.size();
	int maximo = 0;
	vector <int> res (3,0);
	int cont = 1;
	for(int i = 0; i < tam; i++){
		int num = vec[i];
		res[0] = vec[i];
		for(int j = 1; vec[i]+ j < vec[vec.size()-1]; j=j*2){
			int k = vec[i]+j;
			printf("K: %d\n",k);
			if(binary_search(vec.begin(),vec.end(),vec[i]+j)){
				res[cont] = vec[i]+j;
				cont++;
			}
		}
		if(cont == 3){
			break;
		}
	}

	if(cont == 3){
		printf("3\n");
		printf("%d %d %d\n",res[0],res[1],res[2]);
	}

	return 0;
}