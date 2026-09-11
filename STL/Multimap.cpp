#include <iostream>
#include <map>
using namespace std;
int main() {
    multimap<int, string> myMultimap;

    // Insert elements into the multimap
    myMultimap.insert({1, "apple"});
    myMultimap.insert({2, "banana"});
    myMultimap.insert({1, "apricot"});  // Duplicate key
    myMultimap.insert({3, "cherry"});
    myMultimap.insert({2, "blueberry"});  // Duplicate key
    // Iterate and print the elements
    for (const auto& element : myMultimap) {
        cout << "Key: " << element.first << ", Value: " << element.second << std::endl;
    }
     // Erase the element with key 1 and value "apple"
   for (auto it = myMultimap.begin(); it != myMultimap.end();) {
        if (it->first == 2 && it->second == "banana") {
            it = myMultimap.erase(it);  // Use the iterator returned by erase
        } else {
            ++it;  // Move to the next element
        }
    }
    // Print elements after erasing
    cout << "\nElements after erasing:" << endl;
    for (const auto& element : myMultimap) {
        cout << "Key: " << element.first << ", Value: " << element.second << std::endl;
    }
    return 0;
}
