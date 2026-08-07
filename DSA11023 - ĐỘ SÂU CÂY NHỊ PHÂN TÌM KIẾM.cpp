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
void kp(Node *&root, int n)
{
    if (root == nullptr)
    {
        root = new Node(n);
        return;
    }
    if (root->val > n)
        kp(root->l, n);
    if (root->val < n)
        kp(root->r, n);
}
int cnt, ans;
void PRO(Node *&root)
{
    if (root == nullptr)
        return;
    cnt++;
    ans = max(ans, cnt);
    PRO(root->l);
    PRO(root->r);
    cnt--;
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
        REP(i, n)
        {
            int x;
            cin >> x;
            kp(root, x);
        }
        cnt = -1, ans = 0;
        PRO(root);
        cout << ans << endl;
    }
    return 0;
}