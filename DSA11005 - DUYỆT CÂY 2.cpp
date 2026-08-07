#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)

// Cre by ManhNTzz

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
int findIndex(const vector<int> &in, int val, int start, int end)
{
	FOR(i, start, end)
	{
		if (in[i] == val)
			return i;
	}
	return -1;
}
void KhoiPhuc(Node *&c, const vector<int> &in, const vector<int> &level, int inStart, int inEnd)
{
	if (inStart > inEnd)
		return;
	int rootVal = -1;
	int rootIdx = -1;
	REP(i, level.size())
	{
		int idx = findIndex(in, level[i], inStart, inEnd);
		if (idx != -1)
		{
			rootVal = level[i];
			rootIdx = idx;
			break;
		}
	}
	c = new Node(rootVal);
	KhoiPhuc(c->l, in, level, inStart, rootIdx - 1);
	KhoiPhuc(c->r, in, level, rootIdx + 1, inEnd);
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
		vector<int> in(n), level(n);
		REP(i, n)
		cin >> in[i];
		REP(i, n)
		cin >> level[i];

		Node *root = nullptr;
		// Bắt đầu dựng cây với phạm vi Inorder từ 0 đến n - 1
		KhoiPhuc(root, in, level, 0, n - 1);

		Postorder(root);
		cout << "\n";
	}
	return 0;
}