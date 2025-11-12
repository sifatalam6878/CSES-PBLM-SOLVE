#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long x, res = 0, pre;
    cin >> pre;
    for (int i = 1; i < n;i++)
    {
        cin >> x;
        if(x<pre)
            res += pre - x;
        else
        {
            pre = x;
        }

    }
    cout << res << endl;
    return 0;
}
