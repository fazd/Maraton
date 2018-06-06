#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	cin>>n;
	string str;
	cin>>str;
	int max = 0;
	string gram;
	for(int i = 0; i < n-1; i++){
		string subs = str.substr(i,2);
		//cout<<"subs: "<< subs <<"\n";
		int cont = 0;
		for(int j = 0; j < n-1; j++){
			string temp = str.substr(j,2);
			//cout<<"temp: "<< temp <<"\n";
			
			if(subs.compare(temp)==0){
				cont++;
			}
		}
		if(cont > max){
			max = cont;
			gram = subs;
		}
	}
	if(n==2){
		cout<<str<<"\n";
	}
	else{
		cout<<gram<<"\n";
	}
	return 0;
}