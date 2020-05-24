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
  int a[1000];
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m + 1; i++)
        cin >> a[i];

    int friends = 0;

    for (int i = 0; i < m; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
            if (((a[i] >> j) & 1) != ((a[m] >> j) & 1))
                t++;
        if(t <= k)
            friends++;
    }

    cout << friends << endl;
    return 0;
}