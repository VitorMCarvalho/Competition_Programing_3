#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int K, N, M, pole1, pole2;
	while(true){
		cin >> K;
    if(K == 0)
			break;
		cin >> pole1 >> pole2;
		while(K--){
			cin >> N >> M;
			if(N == pole1 || M == pole2)
				cout << "divisa" << endl;
			else if(N < pole1 && M < pole2)
				cout << "SO" << endl;
			else if(N > pole1 && M < pole2)
				cout << "SE" << endl;
			else if(N > pole1 && M > pole2)
				cout << "NE" << endl;
			else if(N < pole1 && M > pole2)
				cout << "NO" << endl;
			}
		}
  return 0;
}
