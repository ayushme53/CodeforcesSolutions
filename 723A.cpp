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
    int a,b,c;
    cin>>a>>b>>c;
    int mn = INT_MAX, mx = INT_MIN;
    if(a<b&&a<c){
        mn = a;
    }
    else if(b<a&&b<c){
        mn = b;
    }
    else{
        mn = c;
    }
    if(a>b&&a>c){
        mx = a;
    }
    else if(b>a&&b>c){
        mx = b;
    }
    else{
        mx = c;
    }
    int res = mx-mn;


    cout<<res<<endl;
}