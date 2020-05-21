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
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n>2){
            cout<<"YES\n"<<"2\n";
            cout<<s[0]<<" ";
            for(int i=1;i<n;i++){
                cout<<s[i];
            }
            cout<<"\n";
        }
        else if(n==2){
            if(s[0]==s[1])
                cout<<"NO\n";
            else if(s[0]-'0'<s[1]-'0'){
                cout<<"YES\n"<<"2\n";
                cout<<s[0]<<" "<<s[1]<<endl;
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
	

}