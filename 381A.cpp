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
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int i=0,j=n-1;
	int c1=0,c2=0,mx=0,k=0;
	while(i<=j){
		if(a[i]>=a[j]){
			mx = a[i];
			i++;
		}
		else{
			mx =  a[j];
			j--;
		}
		if(k&1){
			c2 +=mx;
		}
		else
			c1 += mx;
		k++;

	}
	cout<<c1<<" "<<c2<<endl;

}