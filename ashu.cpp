//OM NAMAY SHIVAYEE
//Ashutosh Gupta
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define l long long
#define vi vector<int>
#define si set<int>
#define pii pair<int, int>
#define fl(i, a, b) for (int i = a; i < b; i++)
#define fn(a, b, n) for (int i = a; i < b; i = i + n)
#define lt 1000000000
#define e endl;
const int32_t PN = 1e9 + 7;

bool bin(int a[], int o, int r, int k)
{
    while (o <= r)
    {
        int m = o + (r - o) / 2;
        if (a[m] < k)
        {
            o = m + 1;
        }
        else if (a[m] > k)
        {
            r = m - 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

void en(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int main()
{
    //You can do it!!.Just Focus,you can and you will.
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

cout<<"ashutosjh";

    return 0;
}