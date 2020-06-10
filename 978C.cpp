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

int main()
{
    faster;
   int n,m;
   cin>>n>>m;
   int a[n];
   vector<ll>v(n+1);
   for(int i=1;i<=n;i++){
   		cin>>v[i];
   }  
   for(int i=1;i<= n;i++){
   	  v[i] +=v[i-1];
   }
  while(m--){
    ll num;
  	cin>>num;
   	ll idx = lower_bound(v.begin(),v.end(),num)-v.begin();
   	if(v[idx]>=num){
   		cout<<idx<<" "<<num-v[idx-1]<<endl;
   	}
   }

}
