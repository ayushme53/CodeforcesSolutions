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
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	int count= 1,mn=1;
	for(int i=1;i<n;i++){
		if(a[i]>=a[i-1]){
			count++;
			mn = max(mn,count);
		}
		else{
			count=1;
		}
		

	}
	cout<<mn<<endl;
}