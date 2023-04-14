#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int val;
		cin >> val;
		v.push_back(val);
	}
	int q;
	cin >> q;
	vector<vector<int>> vec;
	while(q--)
	{
		int l,r;
		cin >> l >> r;
		int sum=0;
		for(int i=l;i<=r;i++)
		{
			sum+=v[i];
		}
		cout << sum << endl;
	}
}
