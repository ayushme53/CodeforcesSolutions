#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n--)
    {
        int p, k;
        cin >> p >> k;
        int r = k - p;
        if (r >= 2)
            count++;
    }
    cout << count << endl;
}