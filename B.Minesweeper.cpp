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

vector < ll > sort (vector <ll> v){
	sort(v.begin(),v.end());
	return v;
}

void print_vec(vector < ll >vec ){
	for(int i = 0; i < vec.size(); i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}


bool check_bombs(char mat[102][102], int i, int j){
	if (mat[i-1][j-1]!='*' && mat[i-1][j]!='*' && mat[i-1][j+1]!='*' && 
		mat[i][j-1]!='*' && mat[i][j+1]!='*' && mat[i+1][j-1]!='*' && 
		mat[i+1][j]!='*' && mat[i+1][j+1]!='*'){
		return true;
	}
	return false;
}


bool check_mines(char mat[102][102], int i, int j){
	int minas = mat[i][j]-48;
	int cont = 0;
	if(mat[i-1][j-1]=='*'){cont++;}
	if(mat[i-1][j]=='*'){cont++;}
	if(mat[i-1][j+1]=='*'){cont++;}
	if(mat[i][j-1]=='*'){cont++;}
	if(mat[i][j+1]=='*'){cont++;}
	if(mat[i+1][j-1]=='*'){cont++;}
	if(mat[i+1][j]=='*'){cont++;}
	if(mat[i+1][j+1]=='*'){cont++;}
	return cont==minas;
}



int main ()
{
	int n = read_32();
	int m= read_32();
	char mat [102][102];
	for(int i = 1; i < n+1; i++){
		for(int j = 1; j < m+1 ; j++){
			cin>>mat[i][j];
		}
	}

	for(int i = 0; i < m+1; i++){
		mat[0][i] = '.';
		mat[n+1][i] = '.';
	}
	for(int i = 0; i < n+1; i++){
		mat[i][0] = '.';
		mat[i][m+1] = '.';
	}	

	/*for(int i = 0; i < n+2; i++){
		for(int j = 0; j < m+2; j++){
			cout<<mat[i][j];
		}
		cout<<"\n";
	}*/
	bool sw = true;
	for(int i = 1; i < n+1; i++){
		for(int j = 1; j < m+1; j++){
			if(mat[i][j]=='.'){
				if(!check_bombs(mat,i,j)){
					sw = false;
					break;
				}
			}
			else if (mat[i][j]>=49 && mat[i][j]<=57){
				if(!check_mines(mat,i,j)){
					sw = false;
					break;
				}
			}
		}
		if(!sw){
			break;
		}
	}
	if(sw){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

	return 0;
}