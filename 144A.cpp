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
	int n;
	cin>>n;
 
	int ary[n];
 
	for(int i = 0; i < n; i++) cin>>ary[i];
 
	int mini = 101, maxi = -1;
 
	int pos_min, pos_max;
 
	for(int i = 0; i < n; i++)
	{
		if(ary[i]<=mini) pos_min = i, mini = ary[i];
		if(ary[i]>maxi) pos_max = i, maxi = ary[i];
	}
 
 
	if(pos_max>pos_min) cout<<pos_max-0 + (n-1-pos_min) - 1<<endl;
	else cout<<pos_max-0 + (n-1-pos_min)<<endl;
 
    return 0;
}