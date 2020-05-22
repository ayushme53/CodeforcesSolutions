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

int main(){
	ll n;
	cin>>n;
	ll a[n];
	ll sum=0,ans1=0,ans2=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		sum +=a[i];
	}
	for(ll i=0;i<n-1;i++){
		cin>>a[i];
		ans1 +=a[i];
	}	
	for(ll i=0;i<n-2;i++){
		cin>>a[i];
		ans2 +=a[i];
	}
	cout<<sum-ans1<<endl;
	cout<<ans1-ans2;
	
	



}