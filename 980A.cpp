#include <bits/stdc++.h>
using namespace std;
 
#define faster ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair
#define mod 1000000007
#define qmod 998244353
#define endl "\n"
#define pb push_back
#define ff first 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi; 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = LLONG_MAX;
 
int main()
{
	faster;
	string s;
    cin>>s;
    int cnt=0,nmt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'o')
        {
            cnt++;
        }
        if(s[i] == '-')
        {
            nmt++;
        }
    }
    if(cnt == 0 || nmt == 0)
    {
        cout<<"YES";
        return 0;
    }
    if(nmt % cnt == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
 
	
}