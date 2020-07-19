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
   	faster;
    int n, m;
	cin>>n>>m;
	vector<int> f(m);
	for(int i=0;i<m;i++) 
        cin>>f[i];
	sort(f.begin(),f.end());
	int res = INT_MAX;
	for(int i=0;i<(m-n+1);i++){
		int maxid = f[n-1+i];
		int minid = f[i];
		res = min((maxid - minid),res);
	}
	cout<<res;
	return 0;
}
