#include <bits/stdc++.h>
using namespace std;
 
#define faster ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair
#define mod 1000000007
#define qmod 998244353
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = LLONG_MAX;

bool isPrime(int n){
	if(n==0||n==1)
		return false;
	if((n%2==0)){
		if(n==2)
			return true;
		else
			return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0)
			return false;
	}
	return true;
}

int main(){
	faster;
	int n,m;
	int ans=0;
	cin>>n>>m;
	for(int i=n+1;;i++){
		if(isPrime(i)){
			ans = i;
			break;
		}
	}
	if(ans==m)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}