#include <iostream>
using namespace std;
template <class search>
int searchElement (search* array, search value, int size)
{
	for (int j=0; j<10; j++)
	{
		if (array[j]== value)
		{
			return j+1;
		}
	}
	return -1;
	int intarr[size];
int in;
cout<<"Enter array elements";
for(int i=0; i<10;i++)
{
	cin>>intarr[i];
}
cout<<"Enter integer to find in your array";
cin>>in;

}


main()
{
	std::cout<<in<< " in the passed array is at index: "<<searchElement(intarr,in,5);
	
}
