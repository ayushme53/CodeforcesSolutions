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
    int n;
    cin>>n;
    vi v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        int ans = ((upper_bound(v.begin(),v.end(),t)-1)-v.begin());
        cout<<ans+1<<endl;
    }
	
}