#include <iostream>
#include <set>
#include <string>
#pragma warning(disable: 4996)

using namespace std;

int main() {
	int N, M;
	string s;
	set<string> st;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> s;
		st.insert(s);
	}

	int num = 0;
	for (int j = 0; j < M; j++) {
		cin >> s;
		if (st.find(s) != st.end()) {
			num++;
		}
	}
	cout << num;


	return 0;
}