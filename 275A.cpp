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

int a[5][5];
int main(){
	faster;
	for(int i=1;i<=3;i++)
		for(int j=1;j<=3;j++)
			cin>>a[i][j];
	for(int i=1;i<=3;i++,cout<<endl)
		for(int j=1;j<=3;j++)
			cout<<1-((a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j-1]+a[i][j+1]))%2;
}