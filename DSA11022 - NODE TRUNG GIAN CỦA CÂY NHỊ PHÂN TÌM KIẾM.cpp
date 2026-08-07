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
void khoiphuc(Node *&root, vector<int> &a)
{
    if (a.empty())
        return;
    root = new Node(a[0]);
    int i = 1;
    while (i < a.size() && a[0] > a[i])
        i++;
    vector<int> a1(a.begin() + 1, a.begin() + i);
    vector<int> a2(a.begin() + i, a.end());
    khoiphuc(root->l, a1);
    khoiphuc(root->r, a2);
}
int cnt;
void PRO(Node *&root)
{
    if (root == nullptr)
        return;
    if (root->l == nullptr && root->r == nullptr)
        cnt++;
    PRO(root->l);
    PRO(root->r);
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
        vector<int> a(n);
        REP(i, n)
        cin >> a[i];
        khoiphuc(root, a);
        cnt = 0;
        PRO(root);
        cout << n - cnt << endl;
    }
    return 0;
}
