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
	int n, has= 0, occ= 0, tmp;
    cin>>n;
    while(n--){
        cin>>tmp;
        
        if(tmp > 0) has+= tmp;
        else if(has > 0){
            has--;
        }
        else occ++;
    }
    
    cout<< occ<<endl;
    return 0;
}