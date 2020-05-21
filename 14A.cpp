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

int n , m ;
int main()
{
    scanf("%d%d",&n,&m);
    char arr[n][m];
        for(int i =0 ; i < n ; i++){
            for(int j = 0 ;j < m ; j++){
                cin>>arr[i][j]; 
            }
        }
        bool flag = 0;
         int firstI = 100 , firstJ = 100 , lastI = 0 , lastJ = 0;
        for(int i =0 ; i < n ; i++){
            for(int j = 0 ;j < m ; j++){
                if(arr[i][j]=='*'){
                    firstI = min(i,firstI);
                    lastI = max(i,lastI);
                    firstJ = min(j,firstJ);
                    lastJ = max(j,lastJ);
                }
            }
        }
        
        for(int i = firstI ; i <= lastI; i++){
            for(int j = firstJ ; j <= lastJ ;j++){
                cout<<arr[i][j];
            }
            puts("");
        }
}