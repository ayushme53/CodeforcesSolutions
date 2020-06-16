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


bool f(ll n){
    if (n <= 1)
     return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}
 
int main() {
    faster;
    ll n,x,y;
    cin>>n;
    x = n/2;
    y = n/2 + (n%2);
    while(f(x)||f(y)){
        x++;
        y--;
    }
    cout<<x<<" "<<y;
	return 0;
}