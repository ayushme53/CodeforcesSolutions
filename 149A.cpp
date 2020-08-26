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
	int k;
	cin>>k;
	int a[12];
	int c=0;
	for(int i=0;i<12;i++){
		cin>>a[i];
	}
	int sum=0;
	sort(a,a+12);
	for(int i=11;i>=0;i--){
		if(sum>=k){
			break;
		}
		c++;
		sum +=a[i];
	}
	if(sum>=k){
		cout<<c<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
}