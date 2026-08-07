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
    Node *l;
    Node *r;
    Node(int x)
    {
        val = x;
        l = r = nullptr;
    }
};
void Khoiphuc(Node *&c, vector<int> &a, vector<int> &b)
{
    if (a.empty() || b.empty())
        return;
    c = new Node(b[0]);
    int i = 0;
    while (i < a.size() && a[i] != b[0])
        i++;
    vector<int> a1(a.begin(), a.begin() + i);
    vector<int> b1(b.begin() + 1, b.begin() + i + 1);
    Khoiphuc(c->l, a1, b1);
    vector<int> a2(a.begin() + i + 1, a.end());
    vector<int> b2(b.begin() + i + 1, b.end());
    Khoiphuc(c->r, a2, b2);
}
void Postorder(Node *node)
{
    if (node == nullptr)
        return;
    Postorder(node->l);
    Postorder(node->r);
    cout << node->val << " ";
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
        vector<int> a(n), b(n);
        REP(i, n)
        cin >> a[i];
        REP(i, n)
        cin >> b[i];
        Node *root = nullptr;
        Khoiphuc(root, a, b);
        Postorder(root);
        cout << endl;
    }
    return 0;
}