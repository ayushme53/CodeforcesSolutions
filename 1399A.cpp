#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mod 1000000007
#define qmod 998244353
#define M 10000001
#define endl "\n"
#define all(a) (a).begin(),(a).end()
#define rep(i,a,b) for(int i=a;i<b;++i)
#define repr(i,a,b) for(int i=a;i>=b;--i)
#define F first
#define S second
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        bool flag = true;
        if (n == 1) {
            cout << "YES\n";
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if(a[i]-a[i-1]>1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";

    }
}