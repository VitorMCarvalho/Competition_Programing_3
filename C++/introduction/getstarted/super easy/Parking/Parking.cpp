#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, x, buff;
	vector<int> ns;
	cin >> t;
	while(t--){
    int total = 0, aux = 0;
		cin >> n;
		while(n--){
      			cin >> buff;
			ns.push_back (buff);
		}
    sort(ns.begin(), ns.end());
		for (int i = 0; i<ns.size()-1; i++){
      aux = ns[i+1] - ns[i];
			total = total + aux;
    }
    total = total*2;
    cout << total << endl;
    ns.clear();
  }
  return 0;
}
