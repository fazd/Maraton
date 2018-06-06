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


int main ()
{
	int n = read_32();
	while(n--){
		string str;
		cin>>str;

	}
	return 0;
}