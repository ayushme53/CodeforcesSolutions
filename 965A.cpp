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
    int people , total_airplanes, s_airplane, sheets;
    cin >> people >> total_airplanes >> s_airplane >> sheets;
    int planes_needed = people * total_airplanes;
    int sheets_needed;
    if (total_airplanes % s_airplane == 0)
        sheets_needed = total_airplanes / s_airplane;
    else
        sheets_needed = total_airplanes / s_airplane + 1 ;
    int answer = people * sheets_needed;
    if (answer % sheets == 0)
        cout << answer / sheets << endl;
    else
        cout << (answer) / sheets + 1 << endl;

}