#include<iostream>

using namespace std;

int main(void){

	int inputNum;
	int lineNum;
	int starNum;
	int blankNum;
	
	
	cin >> inputNum;
	
	int sumNum = inputNum*2-1;
	
	/*0 1 2 3 4 -> a = 0 , d = 1
	input*2 -1 --- 7 5 3 1 -> a = input*2-1 , d = -2
	0 1 2 3 4 -> a = 0 , d = 1
	the sum of three num is input*2-1*/
	for(lineNum=0;lineNum<inputNum;lineNum++){
		for(blankNum=0;blankNum<lineNum;blankNum++){
			cout << " ";
		}
		for(starNum=0;starNum<sumNum-2*lineNum;starNum++){
			cout << "*";
		}
		for(blankNum=0;blankNum<lineNum;blankNum++){
			cout << " ";
		}
		cout << "\n";
	}
	/*3 2 1 0 -> a = 3 , d = -1
	3 5 7 --- input*2-1 -> a = 3 , d = 2
	3 2 1 0 -> a = 3 , d = -1
	the sum of three num is input*2-1*/
	for(lineNum=0;lineNum<inputNum-1;lineNum++){
		for(blankNum=0;blankNum<(sumNum-3)/2-lineNum;blankNum++){
			cout << " ";
		}
		for(starNum=0;starNum<3+2*lineNum;starNum++){
			cout << "*";
		}
		for(blankNum=0;blankNum<(sumNum-3)/2-lineNum;blankNum++){
			cout << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
