#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, x;
    cin >> n;
    long long res = n * (n + 1) / 2;
    for (long long i = 0; i < n - 1;i++)
    {
        long long x;
        cin >> x;
        res -= x;
    }
    cout << res << endl;
    return 0;
}
