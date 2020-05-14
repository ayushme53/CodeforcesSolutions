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
    int n;
    cin>>n;
    int a[n];
    int r1=0,r2=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=500000){
            r1 = max(r1,a[i]-1);
        }
        if(a[i]>500000){
            r2 = max(r2,1000000-a[i]);
        }
    }
    cout<<max(r1,r2)<<endl;

}
