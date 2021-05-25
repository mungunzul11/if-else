#include<iostream>

using namespace std;

int main (){
	long num1, num2, num3;
	cout<<"input 3  number:     ";
	cin>>num1 >> num2>> num3;
	if (num1>=0 && num2>=0 && num3>=0){
		cout<<"your input numbers positive";
	}
	   else 
		  if (num1<0 && num2>=0 && num3>=0){
		     cout<<num1<<" negative"<<endl;
		     cout<<num2<< " positive"<<endl;
		     cout<<num3<< " positive"<<endl;
		   }
		
		else 
		   if(num1<0 && num2<0 && num3>=0){
		      cout<<num1<<" negative"<<endl;
		      cout<<num2<< " negative"<<endl;
		      cout<<num3<< " positive"<<endl;
		    }
		else 
		    if (num1<0 && num2>=0 && num3<0 ){
		    	cout<<num1<<"  negative"<<endl;
		    	cout<<num2<<"  positive"<<endl;
		    	cout<<num3<<"  negative"<<endl;
			}
		else 
		    if (num1>=0 && num2<0 && num3<0){
		    	cout<<num1<<"  positive"<<endl;
		    	cout<<num2<<"   negative"<<endl;
		    	cout<<num3<<"  negative"<<endl;
		    }
		else 
		    if (num1>=0 && num2<0 && num3>=0){
		    	cout<<num1<<"  positive"<<endl;
		    	cout<<num2<<"  negative"<<endl;
		    	cout<<num3<<"  positive"<<endl;
			}
		else 
		    if (num1>=0 && num2>=0 && num3<0){
		    	cout<<num1<<"  positive"<<endl;
		    	cout<<num2<<"  positive"<<endl;
		    	cout<<num3<<"  negative"<<endl;
			}
		else {cout<<"your input numbers negative";
		    }
		    
	
			
	
	
	  
return 0;
	
}
