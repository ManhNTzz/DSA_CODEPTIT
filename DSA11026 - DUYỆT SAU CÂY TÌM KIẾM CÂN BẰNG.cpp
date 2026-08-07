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
void kp(Node *&root, vector<int> &a, int l, int r)
{
    if (l > r)
        return;
    int mid = (l + r) / 2;
    root = new Node(a[mid]);
    kp(root->l, a, l, mid - 1);
    kp(root->r, a, mid + 1, r);
}
void PO(Node *&root)
{
    if (root == nullptr)
        return;
    PO(root->l);
    PO(root->r);
    cout << root->val << " ";
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
        vector<int> a(n);
        REP(i, n)
        cin >> a[i];
        sort(ALL(a));
        Node *root = nullptr;
        kp(root, a, 0, n - 1);
        PO(root);
        cout << endl;
    }
    return 0;
}