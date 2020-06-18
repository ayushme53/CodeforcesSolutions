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

string s;
bool notPalin(int l,int r){
	for(int i=l;i<=r;i++){
		if(s[i]!=s[r-(i-l)])
			return 0;
	}
	return 1;
}
int main(){
   	faster;
    cin>>s;
	int ans=0;
	for(int i=0;i<s.length();i++){
		for(int j=i;j<s.length();j++){
			if(!notPalin(i,j))
				ans=max(ans,j-i+1);
		}
	}
	cout<<ans<<endl;
}
