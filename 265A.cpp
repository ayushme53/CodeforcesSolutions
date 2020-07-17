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
	faster;
	string s,x;
	cin>>s>>x;
	int res=0;
	int i=0,j=0;
	while(i<s.size()&&j<x.size()){
		if(s[i]==x[j]){
			res++;
			i++;
			j++;
		}
		else{
			j++;
		}
	}
	cout<<res+1<<endl;
	

	
}