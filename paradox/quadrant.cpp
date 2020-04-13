#include<iostream>

using namespace std;

int main(){
	int inputNum1, inputNum2;
	
	
	cin >> inputNum1 ;
	cin >> inputNum2 ;
	
	while(inputNum1*inputNum2 == 0 ){
		
		cout << "다시 입력하세요" << endl;
		cin >> inputNum1;
		cin >> inputNum2;
		 
	}	
	if(inputNum1>0&&inputNum2>0) cout << 1 << endl;
	else if(inputNum1<0&&inputNum2>0) cout << 2 << endl;
	else if(inputNum1<0&&inputNum2<0) cout << 3 << endl;
	else cout << 4 << endl;
	
	return 0;
	
}
