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
   int a[26]={0};
   int n;
   cin>>n;
   string s;
   cin>>s;
   for(int i=0;i<n;i++){
   	s[i] = tolower(s[i]);
   	a[s[i]-'a']=1;
   }
   int flag=0;
   for(int i=0;i<26;i++){
   	 if(a[i]==0)
   		flag=1;
   }
   if(flag==1){
   	cout<<"NO\n";
   }
   else
   	cout<<"YES\n";
}