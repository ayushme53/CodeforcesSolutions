    #include <bits/stdc++.h>
    using namespace std;
 
    #define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
    #define mod 1000000007
    #define qmod 998244353
    #define M 1000001
    #define endl "\n"
    #define all(a) (a).begin(),(a).end()
    #define rep(i,a,b) for(int i=a;i<b;++i)
    #define repr(i,a,b) for(int i=a;i>=b;--i)
    #define F first
    #define S second
    #define pb push_back
    #define mp make_pair
 
    typedef long long ll;
    typedef pair<int,int> pii;
    typedef vector<int> vi;
    typedef vector<string> vs;
    typedef vector<pii> vii;

    int main(){
                
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);   
    #endif 
 
        fast;
        int t=1; 
        cin>>t; 
        while(t--){
            ll n,k;
            cin>>n>>k;
            
            if(n-k+1>0 && (n-k+1)&1){
                cout<<"YES"<<endl;
                rep(i,0,k-1) cout<<"1 ";
                cout<<n-k+1<<endl;
            }
            else if(n-2*k+2>0 && (n-2*k+2)%2==0){
                cout<<"YES"<<endl;
                rep(i,0,k-1) cout<<"2 ";
                cout<<n-2*k+2<<endl;
            }
            else cout<<"NO"<<endl;
        } 
        return 0;   
    }       


    //keep it simple stupid 