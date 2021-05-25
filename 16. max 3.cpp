#include<iostream>

using namespace std;

int main(){
	double num1,num2,num3;
	cout<<" input num1: ";
	cin>>num1;
	cout<<"input num2:  ";
	cin>>num2;
	cout<<"input num3:  ";
	cin>>num3;
	if (num1>num2>num3){
		cout<<"Maximum is: "<<num1;
	    }      
		else {
		if  (num2>num1>num3){
		cout<<"Maximum is: "<<num2;
	    }
		else {
		cout<<"Maximum is: "<<num3;
		}
	return 0;
	}
	
	
}
