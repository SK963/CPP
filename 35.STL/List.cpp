#include <iostream>
#include <list>


int main() {
    std::list<int> list;

    // Push elements into the list
    list.push_back(5);
    list.push_front(10);
    list.push_back(15);

    // Output the size of the list
    std::cout << "List size: " << list.size() << std::endl;
	// Output: List size: 3

    // Remove the first element
    list.pop_front();

    // Insert an element at a specific position
    list.insert(++list.begin(), 20);

    // Output the elements in the list
    std::cout << "Elements in the list: ";
	
    for (const auto& element : list) 
	{
        std::cout << element << " ";
    }
	
    
	// Output: Elements in the list: 10 20 5 15

    return 0;
}

