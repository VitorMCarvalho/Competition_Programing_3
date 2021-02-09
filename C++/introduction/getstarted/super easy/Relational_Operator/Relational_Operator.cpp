#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	int t;
	long int a, b;
	char relational;
	cin >> t;
	while(t--){
		cin >> a >> b;
		if(a > b){
			relational = '>';
			cout << relational << endl;
		}
		if(a < b){
			relational = '<';
			cout << relational << endl;
		}
		if(a == b){
			relational = '=';
			cout << relational << endl;
		}				
	}
    
	return 0;

}
