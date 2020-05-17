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
    faster;
    int n;
    cin>>n;
    int a[n];
    int l1=0,l2=0,l3=0;
    vi one,two,three;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]==1){
            one.pb(i+1);
            l1++;
        }
            
        if(a[i]==2){
            two.pb(i+1);
            l2++;
        }
        if(a[i]==3){
            three.pb(i+1);
            l3++;
        }
        
    }
    int res =0;
    res = min(l1,l2);
    res = min(res,l3);
    cout<<res<<endl;
    for(int i=0;i<res;i++){
        cout<<one[i]<<" ";
        cout<<two[i]<<" ";
        cout<<three[i]<<endl;
    }


 }  