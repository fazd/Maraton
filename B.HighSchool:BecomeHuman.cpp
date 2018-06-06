#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main ()
{
	int x,y;
	scanf("%d %d",&x,&y);
	double a = log(x)/x;
	double b = log(y)/y;
	cout<<a<<"\n";
	cout<<b<<"\n";
	if(isgreater(a,b)){
		printf(">\n");
	}
	else if (isgreater(b,a)){
		printf("<\n");
	}
	else if (a==b){
		printf("=\n");
	}
	return 0;
}