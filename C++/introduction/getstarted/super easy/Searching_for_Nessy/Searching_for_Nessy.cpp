#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int L, n, m, total;
	cin >> L;
	while(L--){
		cin >> n >> m;
		n = n/3;
		m= m/3;
		total = n*m;
		cout << total << endl;
	}
	return 0;
}
