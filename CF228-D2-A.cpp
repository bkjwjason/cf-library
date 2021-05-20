#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a;
	set<int> s;
	for (int i = 0; i < 4; i++){
		cin >> a;
		s.insert(a);
	}
	cout << 4 - s.size() << endl;

		

}

