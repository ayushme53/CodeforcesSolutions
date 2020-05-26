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
    int n,m,x;
    cin>>n>>m;
    vi v,a;
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>x;
        v.pb(x);
    }
    for(int i=v.size()-1;i>=0;i--){
        s.insert(v[i]);
        a.pb(s.size());
    }
    for(int i=0;i<m;i++){
        int p;
        cin>>p;
        cout<<a[a.size()-p]<<endl;
    }
	
}