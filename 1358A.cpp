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
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int r=0,ans=0;
        if(a&1){
            r = (a-1)/2;
            ans = r*(b);
            if(b&1){
                b = b/2+1;
            }
            else{
                b = b/2;
            }
            ans = ans +b;
        }
        else{
            r = a/2;
            ans = r*b;
            if(b&1){
                b = b/2+1;
            }
            else{
                b = b/2;
            }
        }

        cout<<ans<<endl;

    }
    
}