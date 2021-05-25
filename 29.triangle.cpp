#include<iostream>

using namespace  std;

int main (){
	int x,y,z;
	cout<<"Input first angle: ";
	cin>>x;
	cout<<"Input second angle: ";
	cin>>y;
	cout<<"Input third angle: ";
	cin>>z;
	if (x+y+z==180){
		cout<<"The triangle is valid"<<endl;
	}
	else {
		cout<<"The triangle is not valid"<<endl;
	}
return 0;
}
