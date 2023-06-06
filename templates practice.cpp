#include<iostream>
using namespace std;
template <typename T>
T max(const T* arr, const T& data ,int size)
{
	for(int i=0; i<size; i++)
	{
	if(arr[i]>data)
	{
		return arr[i];
	}
	return data;
	
	}
}
int main(){
	
const int size = 2;
int int_arr[size] = { 34,65 };
double double_arr[size] = {4.3,55.2};
char char_arr[size] = { 'd', '#' };
cout << max<int>(int_arr, 13, size ) << endl;
cout << max<double>(double_arr, 78.6, size) << endl; 
cout << max<char>(char_arr, 'H', size) << endl;
}
