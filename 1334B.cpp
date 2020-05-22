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
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll a[n],sum=0,res=0;
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n,greater<>());
		for(ll i=0;i<n;i++){
			sum +=a[i];
			if(sum/(i+1)>=k)
				res = i+1;
		}
		cout<<res<<endl;
	}

}