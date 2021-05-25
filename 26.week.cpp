#include<iostream>

using namespace std;

int main (){
	int num;
	cout<<"input a week number: ";
	cin>>num;
	
	if (num==1){
		cout<<1<<"=it is monday";
	}else
	if (num==2){
		cout<<num<<"=it is tuesday";
	}else
	if (num==3){
		cout<<num<<"=it is wednesday";
	}else
	if (num==4){
		cout<<num<<"=it is thursday";
	}else
	if (num==5){
		cout<<num<<"=it is friday";
	}else
    if (num==6){
		cout<<num<<"  =it is saturday";
	}else
	if (num==7){
		cout<<num<<" =it is sunday";
	}
	else {
		cout<<num<<" =it is not week number";
	}
	
return 0;
}
