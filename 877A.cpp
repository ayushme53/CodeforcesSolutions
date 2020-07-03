#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int long long
#define ld long double
#define mod 1000000007
#define mod1 mod
#define mod2 100000009
#define show(a) for(int i=0;i<a.size();i++) cout<<a[i & 1]<<" ";
#define fi first
#define se second
#define vi vector<int>
#define vs vector<string>
#define vll vector<ll>
#define pb push_back
#define pi pair<int,int>
#define si set<int>
#define sll set<ll>
#define pll pair<ll, ll>
#define sci(x) scanf("%d",&x)
#define scs(x)  scanf("%s", x)
#define scll(x) scanf("%I64d",&x)
#define all(v) v.begin(),v.end()
#define sot(v) sort(v.begin(), v.end())
#define maxheap priority_queue<int>
#define mp make_pair
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define PI 3.1415926535
#define long_zero 0ll
#define long_one 1ll

inline int sbt(int x) {return __builtin_popcount(x);}

using namespace std;
using namespace __gnu_pbds;
#define FOR(i, j, k, in) for ( i=j ; i<k ; i+=in)
#define TRACE
#ifdef TRACE
#define deb(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1) {
    cout << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}
#else
#define deb(...)
#endif
#define N 10003
bool ok;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ost;

inline int mul(int a, int b, int m = mod) { return (a * b) % m; }
inline int add(int a, int b, int m = mod) { return (a + b) % m; }
inline int sub(int a, int b, int m = mod) { return (a - b + m) % m; }


int32_t main()
{
    fast_io();
 int i,j,k;    
 string s1,s2,s3,s4,s5;
 s1="Danil";
 s2="Olya";
 s3="Slava";
 s4="Ann";
 s5="Nikita";
 string s;
 cin>>s;
 
 
 //Danil
 int x=s1.size();
 int y=s.size();
 int cnt1=0;
 int chk=-1;
 if(x>y)
    cnt1=0;
 else
    {
     FOR(i,0,y,1)    
        {
         chk=1;
         if(y-i+1<x)
            break;
         else
            {
             k=i;    
             FOR(j,0,x,1)    
                {
                 if(s1[j]!=s[k])
                    {
                     chk=-1;    
                     break;
                    }
                 k+=1;    
                }
             if(chk==1)
             cnt1+=1;
            }
        }
    }
       // cout<<cnt1<<endl;
 //olya
  x=s2.size();
  y=s.size();
 int cnt2=0;
  chk=-1;
 if(x>y)
    cnt2=0;
 else
    {
     FOR(i,0,y,1)    
        {
         chk=1;
         if(y-i+1<x)
            break;
         else
            {
             k=i;    
             FOR(j,0,x,1)    
                {
                 if(s2[j]!=s[k])
                    {
                     chk=-1;    
                     break;
                    }
                 k+=1;    
                }
             if(chk==1)
             cnt2+=1;
            }
        }
    }
            // cout<<cnt2<<endl;
 //slava
 x=s3.size();
 y=s.size();
 int cnt3=0;
  chk=-1;
 if(x>y)
    cnt3=0;
 else
    {
     FOR(i,0,y,1)    
        {
         chk=1;
         if(y-i+1<x)
            break;
         else
            {
             k=i;    
             FOR(j,0,x,1)    
                {
                 if(s3[j]!=s[k])
                    {
                     chk=-1;    
                     break;
                    }
                 k+=1;    
                }
             if(chk==1)
             cnt3+=1;
            }
        }
    }
       // cout<<cnt3<<endl;
 //Ann
 x=s4.size();
 y=s.size();
 int cnt4=0;
  chk=-1;
 if(x>y)
    cnt4=0;
 else
    {
     FOR(i,0,y,1)    
        {
         chk=1;
         if(y-i+1<x)
            break;
         else
            {
             k=i;    
             FOR(j,0,x,1)    
                {
                 if(s4[j]!=s[k])
                    {
                     chk=-1;    
                     break;
                    }
                 k+=1;    
                }
             if(chk==1)
             cnt4+=1;
            }
        }
    }
   // cout<<cnt4<<endl;
 //Nikita
 x=s5.size();
 y=s.size();
 int cnt5=0;
  chk=-1;
 if(x>y)
    cnt5=0;
 else
    {
     FOR(i,0,y,1)    
        {
         chk=1;
         if(y-i+1<x)
            break;
         else
            {
             k=i;    
             FOR(j,0,x,1)    
                {
                 if(s5[j]!=s[k])
                    {
                     chk=-1;    
                     break;
                    }
                 k+=1;    
                }
             if(chk==1)
             cnt5+=1;
            }
        }
    }
        //cout<<cnt5;
    int sum=cnt1+cnt2+cnt3+cnt4+cnt5;
    if(sum==1)
        cout<<"YES";
    else
        cout<<"NO";
  return 0;    
}