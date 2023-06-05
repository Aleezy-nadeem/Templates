#include<iostream>
using namespace std;


int main(){
	   double numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;
    
    try{
    	
    	if(denominator == 0)
    		throw;
    	
	}
	catch(const char *msg){
		cout<<msg ;
	}
	catch(int a){
		cout<<"now you have thrown integer";
	}
//	catch(...){
//        cout << "Unexpected exception!" << endl;
//	}

 return 0;
}
