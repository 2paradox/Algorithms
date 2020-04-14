#include<iostream>

using namespace std;

int main(void){
	
	int inputNum;
	int lineNum;
	int starNum;
	int blankNum;
	
	
	cin >> inputNum;
	int maxLine = inputNum*2;
	// if input Num is 5
	// * * *  star + blank = 5 odd line star num is inputNum-inputNum/2
	//  * *	  star + blank = 5 even line star num is inputNum/2
	// * * *
	//  * *
	// * * *
	//  * *
	// * * *
	//  * *
	// * * *
	//  * *
	if(inputNum%2==0){//case 1 , inputNum is even
		for(lineNum=0;lineNum<maxLine;lineNum++){//from first line to last line
			if(lineNum%2==0){ // case 1, lineNum is even, the reason why i classify, it is different structure of star and blank 
				for(int i=0;i<inputNum/2;i++){
					cout << "* ";
				}
				cout << "\n";
			}
			else{ 
				for(int i=0;i<inputNum/2;i++){
					cout << " *";
				}
				cout << "\n";
			}
		}
	}
	else{// case 2, inputNum is odd
		for(lineNum=0;lineNum<maxLine;lineNum++){
			if(lineNum%2==0){
				for(int i=0;i<inputNum/2+1;i++){
					cout <<"* ";
				}
				cout << "\n";
			}
			else{
				for(int i=0;i<inputNum/2;i++){
					cout <<" *";
				}
				cout << " ";
				cout << "\n";
			}
		}
		
	}
	
	return 0;
}
