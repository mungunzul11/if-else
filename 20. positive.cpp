#include<iostream>

using namespace std;

int main (){
	float x;
	cout<<"input number: ";
	cin>>x;
	if (x>0)
	   {cout<<x<<" is positive";
		}
		else 
		if (x<0)
		{cout<<x<<" is negative";
		}
		else 
		{cout<<x<<" is zero";
		}
return 0;
}
