#include <iostream>
#include<string>
using namespace std;
int main() {
  string loop;
  while(getline (cin,loop) && loop.length() != 0){
  cout << loop << endl;
  }
}
