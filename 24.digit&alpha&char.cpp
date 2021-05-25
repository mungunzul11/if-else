#include<iostream>

using namespace std;

int main (){
	char ch;
	cout<<"enter a character; ";
	cin>>ch;
    if(ch>='0' && ch<='9')
	 {cout<<ch<<" is digit"<<endl;
	 }
else 	if (ch>=65 && ch<=90)
	 {cout<<ch<<" is uppercase alphabet"<<endl;
     }
else 	if (ch>=97 && ch<=122)
	 {cout<<ch<<" is lowercase alphabet"<<endl;
	 }
	else 
	{cout<<ch<<" is character";
	}
return 0;	    
	
}
