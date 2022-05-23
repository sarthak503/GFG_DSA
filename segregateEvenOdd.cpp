// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

// } Driver Code Ends
// User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
    Node *divide(int N, Node *head)
    {
        // code here
        Node *even = head, *odd = head;
        vector<int> ans;

        for (int i = 0; i < N; i++)
        {
            if (even->data % 2 == 0)
            {
                ans.push_back(even->data);
            }
            even = even->next;
        }

        for (int i = 0; i < N; i++)
        {
            if (odd->data % 2 != 0)
            {
                ans.push_back(odd->data);
            }
            odd = odd->next;
        }

        Node *result = new Node(ans[0]);
        Node *ptr = result;

        for (int i = 1; i < N; i++)
        {
            ptr->next = new Node(ans[i]);
            ptr = ptr->next;
        }
        return result;
    }
};

// { Driver Code Starts.

int main()
{
    // code
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int data;
        cin >> data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N - 1; ++i)
        {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans);
    }
    return 0;
}
// } Driver Code Ends