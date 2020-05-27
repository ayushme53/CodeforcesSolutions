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
#define mk make_pair 
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = LLONG_MAX;
const int MAX_V = 201;
int main(){
    faster;
      int t=1;
        cin>>t; 
        while(t--){
            ll x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;
            ll ans=1;
            ans+=(x2-x1)*(y2-y1);
            cout<<ans<<endl;
       } 
        return 0; 
	
}