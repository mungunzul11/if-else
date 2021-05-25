#include<iostream>

using namespace std;

int main (){ 
    int x;
    cout<<"input year;  ";
    cin>>x;
    if (x%100==0){
    	if (x%400==0){
			cout<<x<<" year is a leap";}
    	else{
    		cout<<x<<"  year is not leap";
		}
	}
		else if (x%4==0){
			cout<<x<<"  year is a leap";
		}
			else {
				cout<<x<<"  year is a not leap";
			}
			return 0;	
}
