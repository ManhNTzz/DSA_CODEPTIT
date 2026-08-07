#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FOD(i, a, b) for (int i = (b); i >= (a); --i)
#define ll long long
#define se second
#define fi first
#define len length()
#define ALL(s) s.begin(), s.end()
#define vi vector<int>
#define vb vector<bool>
#define vll vector<long long>
#define pb push_back
const long long mod = 1000000007;

// Cre by ManhNTzz

const int INF = 1e9;
class Node
{
public:
    int val;
    Node *r;
    Node *l;
    Node(int x)
    {
        val = x;
        r = l = nullptr;
    }
};
void kp(Node *&root, int n1, int n2, char c)
{
    if (root == nullptr)
        return;
    if (root->val == n1)
    {
        if (c == 'L')
            root->l = new Node(n2);
        else
            root->r = new Node(n2);
    }
    else
    {
        kp(root->l, n1, n2, c);
        kp(root->r, n1, n2, c);
    }
}
bool kt(Node *&root)
{
    if (root == nullptr)
        return true;
    if (root->l == nullptr && root->r == nullptr)
        return true;
    if (root->l != nullptr && root->r != nullptr)
    {
        return kt(root->l) && kt(root->r);
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Node *root = nullptr;
        FOR(i, 1, n)
        {
            int n1, n2;
            char c;
            cin >> n1 >> n2 >> c;
            if (root == nullptr)
            {
                root = new Node(n1);
                if (c == 'L')
                    root->l = new Node(n2);
                else
                    root->r = new Node(n2);
            }
            else
                kp(root, n1, n2, c);
        }
        if (kt(root))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
