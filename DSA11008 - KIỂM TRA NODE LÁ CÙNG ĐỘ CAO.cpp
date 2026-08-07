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
	Node *left;
	Node *right;
	Node(int x)
	{
		val = x;
		left = right = nullptr;
	}
};

void KhoiPhuc(Node *&root, vector<string> &a, int i)
{
	if (!root)
		return;
	if (root->val == stoi(a[i]))
	{
		if (a[i + 2] == "L")
		{
			root->left = new Node(stoi(a[i + 1]));
		}
		else if (a[i + 2] == "R")
		{
			root->right = new Node(stoi(a[i + 1]));
		}
		return;
	}
	if (root->left)
		KhoiPhuc(root->left, a, i);
	if (root->right)
		KhoiPhuc(root->right, a, i);
}

int check(Node *node)
{
	if (!node)
		return 1;
	queue<Node *> qe;
	qe.push(node);
	vector<int> res;
	int level = -1;
	int sz = 1;

	while (!qe.empty())
	{
		sz = qe.size();
		for (int i = 0; i < sz; i++)
		{
			Node *top = qe.front();
			qe.pop();
			res.push_back(top->val);
			if (top->right)
				qe.push(top->right);
			if (top->left)
				qe.push(top->left);
		}
		level++;
	}
	return sz == (1 << level);
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
		vector<string> a(3 * n);
		for (string &x : a)
			cin >> x;
		Node *root = new Node(stoi(a[0]));
		for (int i = 0; i < a.size(); i += 3)
		{
			KhoiPhuc(root, a, i);
		}
		cout << check(root) << endl;
	}
	return 0;
}
