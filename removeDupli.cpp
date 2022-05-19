#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    map<char, int> m;
    for (int i = 0; i < t.length(); i++)
    {
        if (m.find(t[i]) == m.end())
            m[t[i]] = 1;
        else
            m[t[i]]++;
    }
    cout << "\nSo the duplicate characters are : ";
    for (auto x : m)
    {
        if (x.second > 1)
            cout << x.first;
    }
}