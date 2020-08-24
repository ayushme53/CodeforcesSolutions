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

int main()
{
    faster;
    int n;
    cin >> n;
    string input;
    cin >> input;
    if (n == 1) cout << input;
    else if (n == 2)
    {
        if (input[0] == '1' && input[0] == input[1])
            cout << "1" << endl;
        else
            cout << input << endl;
    }
    else
    {
        int cnt0 = 0;
        for (int i = 0; i < n; ++i)
            cnt0 += input[i] == '0';
        cout << 1;
        for (int i = 0; i < cnt0; ++i)
            cout << 0;
        cout << endl;

    }
}