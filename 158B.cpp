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
	int  n;
	cin>>n;
	int a[n];
	int one=0,two=0,three=0,four=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1)
			one++;
		if(a[i]==2)
			two++;
		if(a[i]==3)
			three++;
		if(a[i]==4)
			four++;
	}
	int count=0;
	count += four;
	count += three;
	one = (one-three);
	count += two/2;
	if(two%2!=0){
		count +=1;
		one = one -2;
	}
	if(one>0){
		count = count +((one+3)/4);
	}
	cout<<count<<endl;




	
}