#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int k;
	scanf("%d",&k);
	vector<pair<int,pair<int,int> > > seq;
	for(int i = 0; i < k; i++){
		int n;
		scanf("%d",&n);
		vector <pair <int,int> > s;
		int suma = 0;
		vector <int> temp ;
		for (int j = 0; j < n; j++){
			int num;
			scanf("%d", &num);
			suma +=num;
			temp.push_back(num);
		}
		for(int j = 0; j < n; j++){
			pair <int, int > p  = make_pair(i,j);
			seq.push_back(make_pair(suma-temp[j],p));
		}
	}
	int sw = false;
	sort(seq.begin(),seq.end());
	for(int i = 0; i < seq.size()-1; i++){
		if(seq[i].first == seq[i+1].first){
			pair <int, int> p1 = seq[i].second;
			pair <int, int> p2 = seq[i+1].second;
			if(p1.first != p2.first){
				printf("YES\n");
				printf("%d %d\n", p1.first+1 , p1.second+1);
				printf("%d %d\n", p2.first+1 , p2.second+1);
				sw = true;
				break;	
			}
			
		}
	}
	if(!sw){
		printf("NO\n");
	}
	return 0;
}