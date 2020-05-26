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
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = LLONG_MAX;
const int MAX_V = 201;
int main(){
	faster;
	int n,k;
	cin>>n>>k;
	int v[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v,v+n);
	if(k==0){
		if(v[0]-1==0)
			cout<<-1;
		else
			cout<<v[0]-1;
		return 0;
	}
	k--;
	if(v[k]==v[k+1])
		cout<<-1;
	else
		cout<<v[k];
	
}