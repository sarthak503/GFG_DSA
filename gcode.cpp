#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int cp = t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        int uflag = 0, lflag = 0, dflag = 0, sflag = 0;
        for (int i = 0; i < l; i++)
        {
            if (islower(s[i]))
                lflag = 1;
            if (isupper(s[i]))
                uflag = 1;
            if (isdigit(s[i]))
                dflag = 1;
            if (s[i] == '#' || s[i] == '@' || s[i] == '*' || s[i] == '&')
                sflag = 1;
        }
        // if (uflag == 1 && lflag == 1 && dflag == 1 && sflag == 1 && l >= 7)
        if (l >= 7)
        {
            if (uflag == 0)
                s += 'A';
            if (lflag == 0)
                s += 'a';
            if (dflag == 0)
                s += '8';
            if (sflag == 0)
                s += '&';
        }
        else
        {
            if (uflag == 0)
                s += 'A';
            if (lflag == 0)
                s += 'a';
            if (dflag == 0)
                s += '8';
            if (sflag == 0)
                s += '&';
            if (s.length() < 7)
            {
                // cout << "S.length()" << s.length();
                for (int i = s.length(); i < 7; i++)
                {
                    s += '&';
                }
            }
        }
        cout << "Case #" << cp - t << ": " << s << endl;
    }
}
