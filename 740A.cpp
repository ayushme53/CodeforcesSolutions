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

int main() {
	faster;
	ll n, a, b, c, mn = INT_MAX;
	cin >> n >> a >> b >> c;

	if (n % 4 == 0) {
		cout << 0;
		return 0;
	}

	if (n % 4 == 1) {
		mn = min (mn, a * 3);
		mn = min (mn, b + a);
		mn = min (mn, c);
	}
	if (n % 4 == 2) {
		mn = min (mn, b);
		mn = min (mn, a * 2);
		mn = min (mn, c * 2);
	}
	if (n % 4 == 3) {
		mn = min (mn, a);
		mn = min (mn, b + c);
		mn = min (mn, c * 3);
	}

	cout << mn;

}
