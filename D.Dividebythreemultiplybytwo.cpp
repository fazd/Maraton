#include <bits/stdc++.h>
typedef long long int ll;

//NO TERMINADO


using namespace std;

int read_32(){
	int n;
	scanf("%d",&n);
	return n;
}

ll read_64(){
	ll n;
	cin>>n;
	return n; 
}


vector< ll > read_vec(int n){
	vector <ll> v (n);
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
	return v;
}

vector < ll > sort (vector <ll> v){
	sort(v.begin(),v.end());
	return v;
}

void print_vec(vector < ll >vec ){
	for(int i = 0; i < vec.size(); i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}


bool exists (ll elem, map<ll, int> mapa){
	if(elem%3 == 0){
		if()
	}
}




int main ()
{
	ll n = read_64();
	vector <ll> v = read_vec(n);
	v = sort(v);
	map < ll , int> visited, copia;
	for(int i = 0; i < n; i++){
		visited[v[i]]=0;
	}
	copia = visited;

	return 0;
}