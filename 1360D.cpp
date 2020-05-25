#include<bits/stdc++.h>
using namespace std;
 
#define faster ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair
#define mod 1000000007
#define qmod 998244353
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define mk make_pair 
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = LLONG_MAX;
const int MAX_V = 201;

int solve(int n,int k){
	int x = ceil(sqrt(n));
	int i,mx=INT_MAX;
	for(int i=1;i<x+1;i++){
		if(n%i==0){
			if(n/i<=k)
				mx = min(mx,i);
			if(i<=k)
				mx = min(mx,n/i);
		}
	}
	return mx;
}
int main(){
	faster;
	ll t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		cout<<solve(a,b)<<endl;
	}
	
}