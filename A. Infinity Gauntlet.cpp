#include<bits/stdc++>;
using namespace std;

int main ()

{
	map<string,string> mapa;
	mapa["purple"]="Power";
	mapa["green"]="Time";
	mapa["blue"]="Space";
	mapa["orange"]="Soul";
	mapa["red"]="Reality";
	mapa["yellow"]="Mind";

	int n;
	scanf("%d",&n);
	int vec[6];
	for(int i = 0; i < n; i++){
		string color;
		cin>>color;
		mapa.at[color] = "";	
	}

	int num = 6-n;
	printf("%d\n",num);
	map<string,string>::iterator it;
	for (it=mapa.begin(); it!=mapa.end(); ++it)
    cout<<it->second <<'\n';

	return 0;
}