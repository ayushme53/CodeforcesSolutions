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
	ll a[n],mn=INT_MAX,mx=0;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		mn = min(mn,a[i]);
		mx = max(mx,a[i]);
	}
	ll x=0,y=0;
	for(ll i=0;i<n;i++){
		if(a[i]==mn)
			x++;
		else if(a[i]==mx)
			y++;
	}
	cout<<mx-mn<<" ";
	if(mn==mx)
		cout<<n*(n-1)/2;
	else
		cout<<x*y;
	



}