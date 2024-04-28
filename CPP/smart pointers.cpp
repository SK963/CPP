#include <iostream>
using namespace std;

class ArrayIterator 
{


public:
  ArrayIterator(int* start_ptr) : start_ptr(start_ptr) {}

  int operator*() 
    {
        return *start_ptr; 
    }
  ArrayIterator& operator++() 
{
    ++start_ptr;
    return *this;
}
  bool operator!=(const ArrayIterator& other)
{
    return start_ptr != other.start_ptr;
}

private:
  int* start_ptr;
};

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *start_ptr = &arr[0];
    
    ArrayIterator it(start_ptr);
    
   while (it != ArrayIterator(end(arr)))
   {
        cout << *it << " ";
        ++it;
    }

}


