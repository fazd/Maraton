#include <bits/stdc++.h>
#include <utility>  
typedef long long int ll;

using namespace std;

int read_32(){
	int n;
	scanf("%d",&n);
	return n;
}



int main ()
{
	int n = read_32();
	vector <pair <int,int> > v (n);
	for(int i = 0; i < n; i++){
		int num = read_32(), num2 = read_32();
		pair  <int, int > p = make_pair(num,num2);
		v[i]= p;
	}
	int m = read_32();
	for(int i = 0; i < m; i++){
		int num = read_32(), num2 = read_32();
		pair <int,int>  p = make_pair(num,num2);
		v.push_back(p);
	}
	
	sort(v.begin(),v.end());
	/*for(int i = 0; i < v.size(); i++){
		printf("(%d , %d)\n", v[i].first,v[i].second);
	}*/

	int tam = v.size();
	ll total =0;
	for(int i = 0; i <v.size(); i++){
		if(v[i].first == v[i+1].first){
			continue;
		}
		else{
			//printf("suma (%d,%d)\n",v[i].first,v[i].second);
			total+=v[i].second;
			//printf("suma : %d\n", total);
		}
	}
	cout<< total <<"\n";
	return 0;
}