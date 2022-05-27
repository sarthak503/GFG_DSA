// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, n;
        cin >> l >> n;
        int arr[l];
        for (int i = 0; i < l; i++)
            cin >> arr[i];
        if (findPair(arr, l, n))
            cout << 1 << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
} // } Driver Code Ends

bool findPair(int arr[], int size, int n)
{
    int i = 0, j = 1;
    sort(arr, arr + size);

    while (i < size && j < size && i < j)
    {
        int s = arr[j] - arr[i];
        // cout<<s<<endl;
        if (s == n)
        {
            return true;
        }
        else if (s > n)
        {
            if (j - i > 1)
                i++;
            else
            {
                i++;
                j++;
            }
        }
        else
        {
            j++;
        }
    }
    return false;
}