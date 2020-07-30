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
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int a[d]={0};
	for(int i=k;i<=d;i+=k){
		a[i] = 1;
	}
	for(int i=l;i<=d;i+=l){
		a[i] = 1;
	}
	for(int i=m;i<=d;i+=m){
		a[i] = 1;
	}
	for(int i=n;i<=d;i+=n){
		a[i] = 1;
	}
	int count=0;
	for(int i=1;i<=d;i++){
		if(a[i]==1)
			count++;
	}
	cout<<count;
}