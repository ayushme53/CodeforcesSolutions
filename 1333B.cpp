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

void answer(){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<int> res(2,0);
        for(int i=0;i<n;i++){
            if(a[i]>b[i]&& !res[0]){
                cout<<"NO\n";
                return;
            }
            else if(a[i]<b[i]&& !res[1]){
                cout<<"NO\n";
                return;

            }
            if(a[i]== -1) res[0] =1;
            if(a[i]== 1) res[1] = 1;
        }
         cout<<"YES\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
       answer();

    }
   
}