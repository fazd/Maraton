#include<bits/stdc++.h>

using namespace std;

int maxL(string str){
	int maximo = 0;
	vector<int> bit (51,0); 
	for(int i = 0; i < str.length(); i++){
		int k = str.at(i);
		if(k < 90){
			bit[k-65]++;
		}
		else{
			bit[26+k-97]++;
		}
	}
	for(int i = 0; i < 50; i++){
		maximo = max(maximo,bit[i]);
	}
	return maximo;
}

int maximo (int max, int conv, int tam, int n){
	max +=conv;
	if(conv <n){
		int turnos = n-conv;
		if(turnos == 1){
			max--;
		}
	}
	return max;
}


int fun (int max, int conv, int n)
{
	max +=conv;
	int turnos = n-conv;
	if(turnos == 1){
		max--;
	}
	return max;
}


int main ()
{
	int n;
	scanf("%d",&n);
	string str1,str2,str3;
	cin>>str1;
	cin>>str2;
	cin>>str3;
	int tam = str1.length();
	int max1  =maxL(str1);
	int max2  =maxL(str2);
	int max3  =maxL(str3);
	int conv1 = tam-max1;
	int conv2 = tam-max2;
	int conv3 = tam-max3;
	if(n >=str1.length()){
		max1 = fun(max1,conv1,n);
		max2 = fun(max2,conv2,n);
		max3 = fun(max3,conv3,n);
	}
	else{
		max1 = maximo(max1,conv1,tam,n);
		max2 = maximo(max2,conv2,tam,n);
		max3 = maximo(max3,conv3,tam,n);
	}
	if(max1 > max2 && max1 > max3){
		cout<<"Kuro\n";
	}
	else if(max2 > max1 && max2 > max3){
		cout<<"Shiro\n";
	}
	else if(max3 > max1 && max3 > max2){
		cout<<"Katie\n";
	}
	else{
		cout<<"Draw\n";
	}
	return 0;
}
