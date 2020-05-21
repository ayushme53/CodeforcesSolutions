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

    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=97&&s[i]<=122)
            l++;
        else if(s[i]>=65&&s[i]<=90)
            u++;
    }
    for(int i=0;i<s.size();i++){
        if(l>=u){
            s[i] = tolower(s[i]);
        }
        else{
            s[i] = toupper(s[i]);
        }
    }
    cout<<s;
    
    
}