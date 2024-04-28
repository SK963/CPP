#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Swap the values of the first and last elements using iter_swap
    iter_swap(numbers.begin(), numbers.end() - 1);

    // Print the vector after swapping
    cout << "Vector after swapping first and last elements: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
