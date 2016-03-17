//============================================================================
// Name        : ayman.cpp
// Author      : Ayman Mostafa
// Email       : ayman93live@hotmail.com
// Version     : v5.0
//============================================================================

#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>

using namespace std;

#define all(x) x.begin(),x.end()
#define allr(x) x.rbegin(),x.rend()

void fastInOut();

bool palind(string s) {
	for (unsigned int i = 0, f = s.size() - 1; i < s.size() / 2; i++, f--)
		if (s[i] != s[f])
			return false;
	return true;
}

//##########################################################################################
//###################################MAIN FUNCTION##########################################
//##########################################################################################
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "rt", stdin);
//freopen("output.txt", "wt", stdout);
#endif
	fastInOut();
//----------------------------------------------------------------------------------
//----------------------------------------------------------------------------------
// 11679 - Sub-prime
	int b, n, d, c, f, x;
	vector<int> v;
	vector<pair<pair<int, int>, int>> vv;
	while (cin >> b >> n) {
		if (!b && !n)
			break;
		v.clear(), vv.clear();
		while (b--) {
			cin >> x;
			v.push_back(x);
		}
		while (n--) {
			cin >> d >> c >> f;
			vv.push_back(make_pair(make_pair(d, c), f));
		}
		for (int i = 0; i < vv.size(); i++) {
			v[vv[i].first.first - 1] -= vv[i].second;
			v[vv[i].first.second - 1] += vv[i].second;
		}
		char res = 'S';
		for (int i = 0; i < v.size(); i++)
			if (v[i] < 0) {
				res = 'N';
				break;
			}
		cout << res << endl;
	}
}
void fastInOut() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL), cout.tie(NULL);
}
