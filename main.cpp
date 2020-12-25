#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void print(stack<char> st) {
	if(st.empty())
		return;
	char x=st.top();
	st.pop();
	cout << x << " ";
	print(st);
	st.push(x);
}

int main() {
	string s;
	cin >> s;
	stack<char> st;
	int n=(int)s.size();
	for(int i=0; i<n; ++i)
		st.push(s[i]);
	print(st);
	cout << "\n";
}
