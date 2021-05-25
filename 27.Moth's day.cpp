#include<iostream>

using namespace std;

int main () {
	int num;
	cout<<"enter month number: ";
	cin>>num;
	
	if (num==1 || num==3 || num==5 || num==7 ||num==8 || num==10 || num==12){
		cout<<num<<"=it contains 31 day."<<endl;
		}
	else if (num==4 || num==6 || num==9 || num==11){
		cout<<num<<"=it contains 30 day."<<endl;
	}
	else if (num==2){
		cout<<num<<"=it contains  28-29 day."<<endl;
	}
	else {
		cout<<num<<"= this is not months number.";
	}
	return 0;
}
