#include<iostream>
using namespace std;




template <typename f, typename t = int>


t sum(t i, f j){
	
	
	return i + j;
}
int main(){
	
	
	cout<<"result of sum is: "<<sum<float>(1.4,4.5);
}
