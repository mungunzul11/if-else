#include<iostream>

using namespace std;

int main (){
	long m,a,b,c,d,e,f,g;
	cout<<"enter money amount: ";
	cin>>m;
	a=m/500;
	cout<<"500: "<<a<<endl;
	b=(m-a*500)/100;
	cout<<"100: "<<b<<endl;
	c=(m-a*500-b*100)/50;
	cout<<"50: "<<c<<endl;
	d=(m-a*500-b*100-c*50)/20;
	cout<<"20: "<<d<<endl;
	e=(m-a*500-b*100-c*50-d*20)/10;
	cout<<"10: "<<c<<endl;
	f=(m-a*500-b*100-c*50-d*20-e*10)/5;
	cout<<"5: "<<f<<endl;
	g=(m-a*500-b*100-c*50-d*20-e*10-f*5)/1;
	cout<<"1: "<<g<<endl;
	
	return 0;
}
