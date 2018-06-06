#include<bits/stdc++.h>

using namespace std;


int flip (vector<int> dig, int d1, int d2){
	int tam = dig.size();
	int i = dig.size()-1;
	int flips = 0;
	bool digit1 = false, digit2 = false;
	while(i >= 0){
		if (dig[i] == d2){	
			for(int j = i; j < tam-1; j++){
				int temp = dig[j+1];
				dig[j+1] = dig[j];
				dig[j] = temp;
				flips++;
			}
			digit1 = true;
			break;
		}
		i--;
	}
	if (digit1){
		i = tam-2;
		while(i >= 0){
			if (dig[i] == d1){	
				for(int j = i; j < tam-2; j++){
					int temp = dig[j+1];
					dig[j+1] = dig[j];
					dig[j] = temp;
					flips++;
				}
				digit2 = true;
				break;
			}
			i--;
		}	
	}
	bool dig0 = true;
	if(dig[0]==0){
		dig0=false;
		i = 1;
		while(i <= tam-3){
			if (dig[i] != 0){	
				for(int j = 0; j <i; j++){
					int temp = dig[j+1];
					dig[j+1] = dig[j];
					dig[j] = temp;
					flips++;
				}
				dig0 = true;
				break;
			}
			i++;
		}
	}

	if(digit1 && digit2 && dig0){
		return flips;
	}
	else{
		return 70;
	}

}


int main ()
{
	long long int  n;
	cin>>n;
	vector <int> dig;
	while(n!= 0){
		int d = n%10;
		dig.push_back(d);
		n/=10;
	}
	reverse(dig.begin(),dig.end());
	int last = dig.size()-1;
	int min = 1000000;
	for(int i = 0; i <= 75; i=i+25){
		int dig1 = i/10;
		int dig2 = i%10;
		int status = flip(dig,dig1,dig2);
		//printf("%d %d\n",i,status);
		if(status < min){
			min = status;
		}
	}
	if(min == 70){
		printf("-1\n");
	}
	else{
		printf("%d\n",min);
	}
	return 0;
}