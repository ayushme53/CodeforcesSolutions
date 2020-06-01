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
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = LLONG_MAX;

int main(){
	faster;
	int n,sum=0;
	cin>>n;
	vi v;
	for(int i=0;i<n;i++){
		int x=0;
		cin>>x;
		sum +=x;
		v.pb(sum);
	}
	int m;
	cin>>m;
	vi b;
	for(int i=0;i<m;i++){
		int y=0;
		cin>>y;
		b.pb(y);
	}
	for(int i=0;i<m;i++){
		int check = upper_bound(v.begin(),v.end(),b[i]-1)-v.begin();
		cout<<check+1<<"\n";
	}
	
}