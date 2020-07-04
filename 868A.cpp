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

int main() {
	faster;
	string s;
	cin>>s;
	int t,c=0;
	cin>>t;
	string x,y;
	int j=0,k=0;
	while(t--){
		cin>>x;
		if(x[1]==s[0])
			j=1;
		if(x[0]==s[1])
			k=1;
		if(s==x){
			j=1;
			k=1;
		}
	}
	
	if(j&&k)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
