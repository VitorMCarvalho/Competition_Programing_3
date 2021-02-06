#include<iostream>
using namespace std;

int main(){
	
	
	int um, dois, tres, quatro, total, op1, op2, op3;
	while(true){
		cin >> um >> dois >> tres >> quatro;
	  if(um==0 && dois==0 && tres==0 && quatro==0){
	      break;
	    }
	  op1 = (40+um-dois);
    if(op1>=40)
  		op1 = op1-40;
   	op2 = (40-dois+tres);
  	if(op2>=40)
   		op2 = op2-40;
   	op3 = (40+tres-quatro);
   	if(op3>=40)
   		op3 = op3-40;
    total = 1080 + 9*(op1 + op2 + op3);
  	printf("%d\n", total);
  }
}
