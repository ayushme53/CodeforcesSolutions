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
    
    int t;
    cin>>t;
    while(t--){
    	string s,x;
    	cin>>s>>x;
    	bool c=0;
    	for(int i=0;i<s.size();i++){
    		for(int j=0;j<s.size();j++){
    			if(s[i]==x[j])
    				c=1;
    		}
    	}
    	if(c)
    		cout<<"YES\n";
    	else
    		cout<<"NO\n";
    }
	

}