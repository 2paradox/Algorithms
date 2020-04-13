#include<iostream>

using namespace std;

int main(void){
		int inputNum;
		
		cin >> inputNum;
		
		int starNum;
		int lineNum;
		int maxNum = inputNum*2 - 1; 
		
		
		for(lineNum=1;lineNum<=maxNum;lineNum++){
			if(lineNum<=inputNum){ 
				for(starNum=1;starNum<=lineNum;starNum++){
					cout << "*";
				}
				cout <<"\n";
			}
			else{
				for(starNum=1;starNum<=maxNum-lineNum+1;starNum++){
					cout << "*";
				}
				cout << "\n";
			}
		}
}
