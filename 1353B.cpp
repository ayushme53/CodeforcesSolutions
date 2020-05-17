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
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n,greater<>());        
        for(int i=0;i<n;i++){
            if(a[i]<b[i]&&k>0){
               swap(a[i],b[i]);
               k--;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
           sum +=a[i];
        }
        cout<<sum<<endl;
    }


 }  