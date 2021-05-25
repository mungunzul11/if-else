#include<iostream>

using namespace std ;

int main(){
	char ch;
	cout<<"inter a character: ";
	cin>>ch;
	if ((ch>=65 && ch<=90 )|| (ch>=97 && ch<=122))
	
	
	    if (ch==65 || ch==69 || ch==73 || ch==79 || ch==89 ||ch==97 || ch==101 || ch==105 || ch==105 || ch==111 ||ch==117 || ch==121) 
		{
		cout<<ch<<"  is a vowel";
		}
		else 
		{
			cout<<ch<<"  is a consonant";
		}
	    
	
	else 
	    {
			cout<<ch<<" is not alphabet";
		}
    
	
	
return 0;
}
