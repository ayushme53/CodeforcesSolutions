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

bool isPerfect(int n)
{
    int var;
    float var1;
    var1 = sqrt((double)n);
    var = var1;
    if (var == var1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (isPerfect(a[i]))
            continue;
        else
        {
            mx = max(mx, a[i]);
        }
    }
    cout << mx << " ";

}