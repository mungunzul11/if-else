#include<iostream>

using namespace std;

int main (){
	char ch;
	cout<<"enter a alphabet: ";
	cin>>ch;
	ch>=65 && ch<=90,ch>=97 && ch<=122;
	if (ch>=65 && ch<=90){
		cout<<ch<<"  is uppercase alphabet";
	}
	else if (ch>=97 && ch<=122){
		cout<<ch<<"   his lowercase alphabet";
	}
	else {
		cout<<ch<<" is not alphabet";
	}
	
	
	
return 0;
}
