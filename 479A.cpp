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

int a[3];
int f(int *a,int i){
    if(i==2)
        return a[2];
    int m=-1;
    if(i==0)
        m = (a[i]+a[i+1])*f(a,i+2);
    return max(a[i]*f(a,i+1),max((a[i]+f(a,i+1)),m));
}
 
int main() {
   faster;
    cin>>a[0]>>a[1]>>a[2];
    cout<<f(a,0);
    return 0;
}