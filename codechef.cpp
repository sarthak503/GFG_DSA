// { Driver Code Starts
// 1. Difficult Rating
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a;
//         for (int i = 0; i < n; i++)
//         {
//             int d;
//             cin >> d;
//             a.push_back(d);
//         }
//         string flag = "Yes";
//         for (int i = 1; i < n; i++)
//         {
//             if (a[i] < a[i - 1])
//             {
//                 flag = "No";
//                 break;
//             }
//         }
//         cout << flag << endl;
//     }
// }
// { Driver Code Starts

// 2. Take Discount or Not

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x, y;
//         cin >> n >> x >> y;
//         vector<int> a;
//         for (int i = 0; i < n; i++)
//         {
//             int d;
//             cin >> d;
//             a.push_back(d);
//         }
//         int tot = 0;
//         for (int i = 0; i < n; i++)
//         {
//             tot += a[i];
//             if (a[i] > y)
//                 x += (a[i] - y);
//         }
//         string flag = tot > x ? "COUPON" : "NO COUPON";
//         cout << flag << endl;
//     }
// }
// 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        ans = ((n / 5) * 2);
        if (n % 5 == 1 || n % 5 == 0)
        {
        }
        else
        {
            ans++;
        }
        cout << ans << endl;
    }
}