#include<bits/stdc++.h>


using namespace std;


int main ()
{
	int n;
	scanf("%d", &n);
	vector<int>dis,pr;
	for(int i = 0; i < n; i++){
		int num;
		scanf("%d",&num);
		dis.push_back(num);	
	}
	for(int i = 0; i < n; i++){
		int num;
		scanf("%d",&num);
		pr.push_back(num);	
	}


	long long int min = 5000000000;
	bool sw = false;
	for(int j = 0; j < n; j++){
		int min1 = 1000000000;
		bool sw1= false;
		for (int i = 0; i < j ; i++){
			if(dis[i] < dis[j]){
				sw1 = true;
				if(pr[i]<min1){
					min1 = pr[i];
				}
			}
		}
		int min2 = 1000000000;
		bool sw2= false;
		for(int k = j+1; k < n; k++){
			if(dis[j] < dis[k]){
				sw2 = true;
				if(pr[k]< min2){
					min2 = pr[k];
				}
			}
		}
		long long int tot = min1+ min2+ pr[j];
		if(tot < min  && sw1 && sw2){
			min = tot;
			sw = true;
		}
	}
	if(sw)
		cout<<min<<"\n";
	else
		cout<<"-1\n";
	return 0;
}