#include <bits/stdc++.h>
typedef long long int ll;

// NO TERMINADO

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

void print_vec(vector < int >vec ){
	for(int i = 0; i < vec.size(); i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}


void simpleSieve(int limit, vector<int> &prime)
{
    // Create a boolean array "mark[0..n-1]" and initialize
    // all entries of it as true. A value in mark[p] will
    // finally be false if 'p' is Not a prime, else true.
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));
 
    for (int p=2; p*p<limit; p++)
    {
        // If p is not changed, then it is a prime
        if (mark[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<limit; i+=p)
                mark[i] = false;
        }
    }
 
    // Print all prime numbers and store them in prime
    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            //cout << p << " ";
        }
    }
}

vector<int> segmentedSieve(int n)
{
    // Compute all primes smaller than or equal
    // to square root of n using simple sieve
    int limit = floor(sqrt(n))+1;
    vector<int> prime; 
    simpleSieve(limit, prime); 
 
    // Divide the range [0..n-1] in different segments
    // We have chosen segment size as sqrt(n).
    int low = limit;
    int high = 2*limit;
 
    // While all segments of range [0..n-1] are not processed,
    // process one segment at a time
    while (low < n)
    {
        if (high >= n) 
           high = n;
         
        // To mark primes in current range. A value in mark[i]
        // will finally be false if 'i-low' is Not a prime,
        // else true.
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));
 
        // Use the found primes by simpleSieve() to find
        // primes in current range
        for (int i = 0; i < prime.size(); i++)
        {
            // Find the minimum number in [low..high] that is
            // a multiple of prime[i] (divisible by prime[i])
            // For example, if low is 31 and prime[i] is 3,
            // we start with 33.
            int loLim = floor(low/prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];
 
            /* Mark multiples of prime[i] in [low..high]:
                We are marking j - low for j, i.e. each number
                in range [low, high] is mapped to [0, high-low]
                so if range is [50, 100] marking 50 corresponds
                to marking 0, marking 51 corresponds to 1 and
                so on. In this way we need to allocate space only
                for range */
            for (int j=loLim; j<high; j+=prime[i])
                mark[j-low] = false;
        }
 
        // Numbers which are not marked as false are primes
        for (int i = low; i<high; i++){
            if (mark[i - low] == true){
                prime.push_back(i);
                //cout<< i << " ";
            }
        }
 
        // Update low and high for next segment
        low = low + limit;
        high = high + limit;
    }
    return prime;
}



int main ()
{
	vector<int> primos = segmentedSieve(100000);
	printf("siga");
	int n = read_32();
	while(n--){
		ll p = read_64(), q = read_64(), b = read_64();
		
		//print_vec(primos);
	}

	return 0;
}
