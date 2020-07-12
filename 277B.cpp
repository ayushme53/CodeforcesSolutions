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

const int n = int(1e5 + 3);
 
int N, m, a[n];
int main(){
	faster;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		int x;
		scanf("%d", &x);
		a[x] = i+1;
	}
	ll res1=0,res2=0;
	scanf("%d", &m);
	while(m--){
		int y;
		scanf("%d", &y);
		res1 += a[y];
		res2 += N-a[y]+1;
	}
	cout<<res1<<" "<<res2<<endl;
	
}