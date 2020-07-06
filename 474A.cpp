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

char keyboard[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";
 
int main()
{
    faster;
    char way[2];
    scanf("%s", way);
 
    char input[120];
    scanf("%s", input);
 
    if(way[0] == 'L')
    {
        for(int i = 0; i < strlen(input); i++)
        {
            for(int j = 0; j < strlen(keyboard); j++)
            {
                if(input[i] == keyboard[j])
                {
                    printf("%c", keyboard[j + 1]);
                    break;
                }
            }
        }
        printf("\n");
    }
    else
    {
        for(int i = 0; i < strlen(input); i++)
        {
            for(int j = 0; j < strlen(keyboard); j++)
            {
                if(input[i] == keyboard[j])
                {
                    printf("%c", keyboard[j - 1]);
                    break;
                }
            }
        }
        printf("\n");
    }
 
    return 0;
}