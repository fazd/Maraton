#include <bits/stdc++.h>
typedef long long int ll;


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

void print_vec(vector < ll >vec ){
	for(int i = 0; i < vec.size(); i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}

int main ()
{
	int n = read_32(), k = read_32();
	vector<ll> v = read_vec(n);
	sort(v.begin(),v.end());
	ll num;
	if(k == 0 && v[0]==1){
		num = -1;
	}
	else if (k==0){
		num =1;
	}
	
	else{
		num = v[k-1];	
		if(k< n && num==v[k]){
			num = -1;	
		}
	}
	//print_vec(v);
	cout<<num<<"\n";
	return 0;
}
















