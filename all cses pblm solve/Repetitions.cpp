#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int best = 1;
    int curr = 1;
    for (int i = 1; i < s.size();i++)
    {
        best = (s[i] == s[i - 1]) ? best + 1 : 1;
        curr = max(curr, best);
    }
    cout << curr;
    return 0;
}
