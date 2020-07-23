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
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
 
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
const ll LINF = LLONG_MAX;

int main(){
	int n;
	cin>>n;
	string s,t;
	cin>>s>>t;
	vi v;
	for(int i=0;i<n;i++){
		if(s[i]==t[i])
			continue;
		int res=-1;
		for(int j=i+1;j<n;j++){
			if(s[j]==t[i]){
				res=j;
				break;
			}
		}
		if(res==-1){
			cout<<-1<<endl;
			return 0;
		}
		for(int j=res-1;j>=i;j--){
			swap(s[j],s[j+1]);
			v.pb(j);
		}
	}
	assert(s==t);
	cout<<v.size()<<endl;
	for(auto x : v){
		cout<<x+1<<" ";
	}

	
}
