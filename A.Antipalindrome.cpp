#include<bits/stdc++.h>

using namespace std;


bool isPal(string str){
	if (str.compare(string(str.rbegin(), str.rend()))==0) {
    	//cout << str << " is a palindrome";
    	return true;
	}
	return false;
}



int main ()
{
	string str;
	cin>>str;
	bool sw = true;
	int tot = 0;
	for(int i = 0; i < str.length(); i++){
		for(int j = 0; j <=i; j++){
			string subs = str.substr(j,str.length()-i);
			//cout<<"sub: "<< subs <<"\n";
			if(!isPal(subs)){
				sw = false;
				int tam = subs.length();
				printf("%d\n",tam);
				break;
			}
		}
		if(!sw){
			break;
		}
	}
	if(sw){
		printf("0\n");
	}
	return 0;
}