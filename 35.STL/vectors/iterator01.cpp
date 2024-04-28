#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v = { 2,3,4,5,6,7};

    cout<<"access using subscript operator"<<endl;
    //direct access
    for(int i = 0 ; i< v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }
    cout<<endl;

    //iterator
    cout<<"access using iterator"<<endl;
    vector<int> :: iterator it;
    for( it = v.begin() ;it != v.end(); it++)
        {
            cout<<*it<<" ";
        }
    cout<<endl;

    // auto keyword 
    cout<<"access using auto declared iterator"<<endl;
     for( auto it1 = v.begin() ;it1 != v.end(); it1++)
        {
            cout<<*it1<<" ";
        }
    cout<<endl;
    
    //range base loops
    cout<<"access using range based loop"<<endl;
    for(int value : v)
        {
            cout<<value<<" ";
        }
    cout<<endl;

    cout<<"modification through ranged based loops"<<endl;
    for(int &value : v) // change the values in the vector
        {
            value++;
            // cout<<value<<" ";
        }

    for(int value : v)
        {
            cout<<value<<" ";
        }
    cout<<endl;

    
    
}