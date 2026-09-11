#include <iostream>
#include <set>
using namespace std;
int main() {
    multiset<int> myMultiset;

    // Insert elements into the multiset
    myMultiset.insert(10);
    myMultiset.insert(20);
    myMultiset.insert(10);  // Duplicate element
    myMultiset.insert(30);
    myMultiset.insert(20);  // Duplicate element
    // Find iterators to the elements at index 0 and 2
    auto itBegin = myMultiset.begin();
    auto itEnd = next(itBegin, 3);  // Iterator pointing to the element after index 2
    // Erase elements between index 0 and 2
    myMultiset.erase(itBegin, itEnd);

    // Iterate and print the elements
    for (const auto& element : myMultiset) {
        cout << element << " ";
    }

    return 0;
}
//Multiset allows multiple elements with the same values mwans repeatition of values 