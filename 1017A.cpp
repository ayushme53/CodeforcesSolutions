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
    int t,a,b,c,d;
    cin>>t;
    int c1=1;
    int mx = 0,res=0;
    cin>>a>>b>>c>>d;
    res = a+b+c+d;
    t -=1;
    while(t--){
        int sum=0;
        cin>>a>>b>>c>>d;
        sum = a+b+c+d;
        if(sum>res){
            c1++;
        }
    }
    cout<<c1;

}