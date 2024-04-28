#include <iostream>
using namespace std;

#include <array>

int main()
{
    array <int , 5> data_array = {11,22,33,44,55};
	cout<<"the data array is :- ";
	for(int i = 0 ; i< 5; i++)
	{
		cout<<data_array[i]<<" ";
	}
    cout<<endl<<data_array.at(2)<<endl;
	// cout<<endl<<data_array.at(5);
	cout<<data_array.front()<<endl;
	cout<<data_array.back()<<endl;
	data_array.fill(10);
	cout<<"the current data array is :- ";
	for(int i = 0 ; i< 5; i++)
	{
		cout<<data_array[i]<<" ";
	}

	cout<<endl<<"array size is :- "<<data_array.size()<<endl;

cout<<"the array iteraton using the iterators:- ";
	for (auto it = begin(data_array); it != end(data_array); ++it) 
	{
        cout << *it << " ";
    }
    
}
/*OUTPUT
the data array is :- 11 22 33 44 55 
33
11
55
the current data array is :- 10 10 10 10 10       
array size is :- 5
the array iteraton using the iterators:- 10 10 10 10 10
*/