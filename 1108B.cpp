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
    
    int n,j=0;
    cin>>n;
    int a[10005],b[10005];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[n-1]<<" ";
    for(int i=1;i<=a[n-1];i++){
        if(a[n-1]%i==0){
            b[j++]=i;
        }
    }
    for(int k=0;k<j;k++){
        for(int i=0;i<n;i++){
            if(a[i]==b[k]){
                a[i]=1;
                break;
            }
        }
    }
    sort(a,a+n);
    cout<<a[n-1]<<endl;
}