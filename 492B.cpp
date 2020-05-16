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
	int n,l;
    cin>>n>>l;
    double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    double mx=0;
    for(int i=0;i<n-1;i++){
        mx = max(mx,a[i+1]-a[i]);
    }
    mx /=2;
    if(a[0]!=0)
        mx =max(mx,a[0]);
    if(a[n-1]!=l)
        mx = max(mx,l-a[n-1]);
   printf("%.9f\n",mx );
}