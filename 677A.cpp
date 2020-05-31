#include<bits/stdc++.h>
using namespace std;
 
#define faster ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
#define mp make_pair
#define mod 1000000007
#define qmod 998244353
#define endl "\n"
#define pb push_back
#define ff first
#define ss second
#define mk make_pair 
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = LLONG_MAX;
const int MAX_V = 201;
int main(){
	int n,h;
	cin>>n>>h;
	int a[n];
	for(int i=0 ;i<n;i++){
		cin>>a[i];
	}
	int c=0;
	for(int i=0 ;i<n;i++){
		if(a[i]>h){
			c++;
		}
	}
	int k = n-c;
	int res = 2*c + k;
	cout<<res;
}