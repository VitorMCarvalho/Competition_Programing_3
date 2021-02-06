#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string name;
  int flag = 0;
  string quitt = "\'\'";
  string quito = "``";

  while(getline(cin,name) && name.length() != 0){
  for(unsigned i=0; i<name.length(); ++i){
    if(name.at(i) == '"' && flag == 0){
      name.replace(i,1,quito); 
      flag = 1;
      }
    if(name.at(i) == '"' && flag == 1){
      name.replace(i,1,quitt);
      flag = 0;
      }
    }
  cout << name << "\n";

  }
  return 0;
}
