#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int  sub1,sub2,sub3,sub4, sub5,av;
	cout<<"Input marks of math subjects: ";
	cin>>sub1;
	cout<<"Input marks of pphysics subjects: ";
	cin>>sub2;
	cout<<"Input marks of biology subjects: ";
	cin>>sub3;
	cout<<"Input marks of computer subjects: ";
	cin>>sub4;
	cout<<"Input marks of chimistry subjects: ";
	cin>>sub5;
	av=(sub1+sub2+sub3+sub4+sub5)/5;
	cout<<"average percentage: "<<av<<endl;
	if (av>=90){
		cout<<"grade A";
	}
	else if(av>=80){
		cout<<"grade B";
	}
	else if (av>=70){
		cout<<"grade C";
	}
	else if (av>=60){
		cout<<"grade D";
	}
	else {
		cout<<"grade F";
	}
	return 0;
}
