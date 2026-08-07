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
void chen(Node *&root, int n1, int n2, char c)
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
		chen(root->l, n1, n2, c);
		chen(root->r, n1, n2, c);
	}
}
void LO(Node *root)
{
	queue<Node *> qe;
	qe.push(root);
	while (!qe.empty())
	{
		Node *node = qe.front();
		qe.pop();
		cout << node->val << " ";
		if (node->l != nullptr)
			qe.push(node->l);
		if (node->r != nullptr)
			qe.push(node->r);
	}
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
				chen(root, n1, n2, c);
		}
		LO(root);
		cout << endl;
	}
	return 0;
}