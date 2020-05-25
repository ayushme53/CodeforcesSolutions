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
            int n;
            cin>>n;
            vs v(n);
            for(int i=0 ;i<n;i++) cin>>v[i];
            bool ok=true;
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-1;j++){
                    if(v[i][j]=='1' && (v[i+1][j]!='1' && v[i][j+1]!='1')){
                        ok=false;
                        break;
                    }
                }
            }
            cout<<(ok?"YES":"NO")<<endl;
        } 
 return 0; 

	
}