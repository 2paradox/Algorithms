#include<iostream>

using namespace std;

int main(void)
{
		int H,M;
		
		//if M is less than 45, M is set 
		//if M is greater than 45, M is set M-45.
		//if H is set H-1, if M is less than 45 except one case that M is just 45.
		//if H is set 23, if M is less than 45 also H is 0.
		
		cin >> H >> M ;
		
		while(H<0||H>23||M<0||M>59) // 
		{
			cout << "can not accept" << endl;
			cout << "Enter time" << endl;
			
			cin >> H >> M;
		}
		
		if(M>=45) cout << H << " " << M-45 << endl;
		else if(H>1) cout << H-1 << " " << 15+M << endl;
		else cout << 23 << " " << 15+M << endl;
		
		return 0;
		
		
}
