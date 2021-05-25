#include<iostream>
#include<cmath>

using namespace std;

int main (){
	float a,b,c,x1,x2;
	cout<<"Input a: "<<endl;
	cin>>a;
	cout<<"Input b: "<<endl;
	cin>>b;
	cout<<"Input c: "<<endl;
	cin>>c;
	if (sqrt(b*b-4*a*c)>=0){
	
	x1=(-b/2*a-sqrt(b*b-4*a*c))/(2*a);
	x2=(-b+sqrt(b*b-4*a*c))/(2*a);
	cout<<"x1= "<<x1<<endl;
	cout<<"x2= "<<x2<<endl;}
	else{
		cout<<"shiidgui"<<endl;
	}
	
	return 0;
	
}
