#include <iostream>
using namespace std;
#include <stdexcept>
#include <exception>


int main()
{
    int size;
    try
    {
        cin>>size;
        if(size >1000)
        throw invalid_argument("Error: Array size exceeds the maximum limit.");
        else if(size < 0)
        throw length_error("Error: Array size must be a positive integer.");
        
        
        int *array = new int[size];
        cout<<"Array allocated successfully."<<endl;
        
        delete []array;
       
        
    }
    catch(const invalid_argument& a)
    {
        cout<<"Length error caught."<<endl<<a.what()<<endl;
        
    }
    catch(const length_error&  b)
    {
        cout<<"Invalid argument caught."<<endl<<b.what()<<endl;
    }
    catch (const exception& c)
    {
        cout<<"Exception caught."<<endl;
    }
    
}