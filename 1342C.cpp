#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define mod (int) 998244353
#define MOD (int) 1e9+7
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tc(t) int t; cin >> t; while (t--)
#define int long long
#define ll long long
#define pb emplace_back
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define in(x) scanf("%d", &x)
#define rr return 0
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define ini(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define fi first
#define se second
#define kitna se
#define endl "\n"
#define pii pair<int, int>
#define vii vector<pi>
const int MAXN = (int)((1e5) + 100);
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
void pr(int x) {cout << x;}
void prl(int x) {cout << x << endl;}


int findcount(int r, int lcm, int b) {
    int div = r / lcm;
    int prod = div * lcm;
    int tot = r;
    if (div != 0)
    {
        tot -= min(b, r - prod + 1);
        tot -= (div - 1) * b;
    }
    return tot - min(r, (b - 1));
}

signed main() {
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    fio;
//srand(time(NULL));
    int T = 1;
    cin >> T;

    while (T--) {
        int a, b, q;
        cin >> a >> b >> q;

        if (a > b) swap(a, b);
        int lc = a * b;
        int gg = gcd(a, b);
        lc /= gg;

        while (q--) {
            int l, r;
            cin >> l >> r;
            // int cnt = 0;
            // loop(i, l, r + 1) {
            //     if ( ((i % a) % b) != ((i % b) % a)) {
            //         //cout << i << endl;
            //         cnt++;
            //     }
            // }
            //  << cnt << " ";

            if ( lc == b || (r < b) ) {
                cout << 0 << " ";
                continue;
            }

            int cnt = findcount(r, lc, b);
            if (l > 1) cnt -= findcount(l - 1, lc, b);
            cout << cnt << " ";

        }
        cout << endl;
    }
}