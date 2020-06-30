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
int main ()
{
    int a[5];
 
    for (int i=1;i<=4;i++)
        cin >> a[i];
 
    string s;
 
    cin >>s;
    int ans =0;
 
    for (int i=0;i<s.length();i++)
        ans += a[s[i]-'0'];
 
    cout << ans << endl;
return 0;
}