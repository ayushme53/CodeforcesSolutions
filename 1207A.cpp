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
		int a,b,c;
		cin>>a>>b>>c;
		int h,p;
		cin>>h>>p;
		int profit=0;
		if(h>=p){
			while(a>1&&b>0){
				profit +=h;
				a -=2;
				b--;

			}
			while(a>1&&c>0){
				profit +=p;
				a -=2;
				c--;
			}
		}
		else{
			while(a>1&&c>0){
				profit +=p;
				a -=2;
				c--;
			}
			while(a>1&&b>0){
				profit +=h;
				a -=2;
				b--;
			}
		}
		cout<<profit<<endl;
	}
}

