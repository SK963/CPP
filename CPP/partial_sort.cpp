#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {5, 2, 8, 1, 7, 3, 9, 4, 6, 10};

    // Partially sort the first 5 elements in ascending order
    partial_sort(numbers.begin(), numbers.begin() + 5, numbers.end());

    // Print the partially sorted vector
    cout << "Partially Sorted Vector: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
