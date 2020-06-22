#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int long long
#define ld long double
#define mod 1000000007
#define mod1 mod
#define mod2 100000009
#define show(a) for(int i=0;i<a.size();i++) cout<<a[i & 1]<<" ";
#define fi first
#define se second
#define vi vector<int>
#define vs vector<string>
#define vll vector<ll>
#define pb push_back
#define pi pair<int,int>
#define si set<int>
#define sll set<ll>
#define pll pair<ll, ll>
#define sci(x) scanf("%d",&x)
#define scs(x)  scanf("%s", x)
#define scll(x) scanf("%I64d",&x)
#define all(v) v.begin(),v.end()
#define sot(v) sort(v.begin(), v.end())
#define maxheap priority_queue<int>
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define PI 3.1415926535
#define long_zero 0ll
#define long_one 1ll

inline int sbt(int x) {return __builtin_popcount(x);}

using namespace std;
using namespace __gnu_pbds;

#define TRACE
#ifdef TRACE
#define deb(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
	cout << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
#else
#define deb(...)
#endif
#define N 10003
bool ok;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ost;

inline int mul(int a, int b, int m = mod) { return (a * b) % m; }
inline int add(int a, int b, int m = mod) { return (a + b) % m; }
inline int sub(int a, int b, int m = mod) { return (a - b + m) % m; }


int32_t main() {
	fast_io();
	string s;
	cin >> s;
	cin >> s;
	int ans = 6;
	for (int i = 0 ; i < 10 ; ++i) {
		for (int j = 0 ; j < 10 ; ++j) {
			for (int k = 0 ; k < 10 ; ++k) {
				for (int l = 0 ; l < 10 ; ++l) {
					for (int m = 0 ; m < 10 ; ++m) {
						for (int n = 0 ; n < 10 ; ++n) {
							if (i + j + k == l + m + n)
							{
								int c = 0;
								if (i != s[0] - '0') c++;
								if (j != s[1] - '0') c++;
								if (k != s[2] - '0') c++;
								if (l != s[3] - '0') c++;
								if (m != s[4] - '0') c++;
								if (n != s[5] - '0') c++;

								if (c < ans) ans = c;
							}
						}
					}
				}
			}
		}
	}
	printf("%d\n" , ans);

}