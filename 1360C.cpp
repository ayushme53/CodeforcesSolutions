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
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],o=0,e=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]&1)
				o++;
			else
				e++;

		}
		if(o%2==0||e%2==0){
			cout<<"YES\n";
		}
		else{
		sort(a,a+n);
		int c=0;
		for(int i=0;i<n;i++){
			if(a[i]&1||a[i]%2==0){
				int r = a[i+1]-a[i];
				if(r==1)
					c++;
			}
		}
		if(c>0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}}
	}
}