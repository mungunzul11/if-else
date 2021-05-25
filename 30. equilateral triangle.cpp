#include<iostream>
#include<cmath>

using namespace std;

int main (){
	int x,y,z;
	cout<<"Input  max side: ";
	cin>>x;
	cout<<"Input second side: ";
	cin>>y;
	cout<<"Input third side: ";
	cin>>z;
	if (x==sqrt(y*y+z*z)){
		cout<<"Triangle is equilateral triangle.";
		}
		else {
			cout<<"Traiangle is not equilateral triangle";
		}
	
	
	
	
	return 0;
}
