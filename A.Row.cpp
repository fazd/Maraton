#include<bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	scanf("%d",&n);
	string str;
	cin>>str;
	bool sw = false;
	if(n == 1){
		if(str.at(0)=='1'){
			sw = true;		
		}
		else{
			sw = false;
		}
	}
	else if (n==2){
		if((str.at(0)=='0' && str.at(1)=='0') || 
			(str.at(0)=='1' && str.at(1)=='1') ){
			sw = false;
		}
		else{
			sw = true;
		}
	}
	else{
		if(str.at(0)=='0' && str.at(1)=='0'){
			sw = false;
		}
		else{
			for(int i = 1; i < n-1; i++){
				if((str.at(i-1)=='1' && str.at(i)=='0' && str.at(i+1)=='1') || 
					(str.at(i-1)=='0' && str.at(i)=='0' && str.at(i+1)=='1') ||
					(str.at(i-1)=='1' && str.at(i)=='0' && str.at(i+1)=='1') ||
					(str.at(i-1)=='0' && str.at(i)=='1' && str.at(i+1)=='0') ||
					(str.at(i-1)=='1' && str.at(i)=='0' && str.at(i+1)=='0')){
					sw = true;
				}
				else{
					//cout<<"false: "<< str.at(i-1) << str.at(i) << str.at(i+1) << "\n";
					sw = false;
					break;
				}
			}
			if(str.at(n-1)=='0' && str.at(n-2)=='0'){
				sw = false;
			}
		}	
	}
	if(sw){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
	return 0;
}