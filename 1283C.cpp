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
    int count[n+1]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        count[a[i]]++;
    }
    vi problem,safe,places;
    for(int i=0;i<n;i++){
        if(count[i+1]==0 &&a[i]==0){
            problem.pb(i);
        }
        else if(count[i+1]==0){
            safe.pb(i);
        }
        else if(a[i]==0){
            places.pb(i);
        }
    }
    if(problem.size()==1){
        a[places[0]] = problem[0] +1;
        a[problem[0]] = safe[0] +1;
        for(int i=1;i<safe.size();i++){
            a[places[i]] = safe[i]+1;
        }
    }
    else if(problem.size()>1){
        for(int i=0;i<problem.size()-1;i++){
            a[problem[i]] = problem[i+1] +1;
        }
        a[problem[problem.size()-1]] =problem[0] +1;
        for(int i=0;i<safe.size();i++){
            a[places[i]] = safe[i]+1;
        }
    }
    else{
        for(int i=0;i<safe.size();i++){
            a[places[i]] = safe[i]+1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}