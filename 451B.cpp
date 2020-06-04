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
#define MAXX 100007
 
int n;
int ara[MAXX];

int main(){
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int st=0,end=0;
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i]){
			st=i-1;
			end=i;
			break;
		}
	}
	while((end+1)<n && a[end]>a[end+1]){
		end++;
	}
	reverse(a+st,a+end+1);
	bool ans= true;
	for(int i=1;i<n;i++){
		if(a[i-1]>a[i]){
			ans = false;
			break;
		}
	}
	if(ans){
		cout<<"yes\n"; cout<<st+1<<" "<<end+1<<endl;
	}
	else{
		cout<<"no\n";
	}
	}
