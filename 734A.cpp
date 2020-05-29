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
	int n;
	cin>>n;
	char c[n];
	for(int i=0 ;i<n ;i++){
		cin>>c[i];
	}
	int c1=0,c2=0;
	for(int i=0 ;i<n ;i++ ){
		if(c[i]=='A'){
			c2++;
		}
		else{
			c1++;
		}
	}
	if(c1>c2){
		cout<<"Danik";
	}
	else if(c2>c1){
		cout<<"Anton";
	}
	else{
		cout<<"Friendship";
	}
}