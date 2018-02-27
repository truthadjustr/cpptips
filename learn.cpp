#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int findnum() {
    vector<int> v = {6,2,89,123,5,7};
    int n = 89;

    if (find(v.begin(),v.end(),n) != v.end()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

void accesselem() {
    vector<int> v = {6,2,89,123,5,7,1,0,123,-4};

    int nlast = v.back();
    int nfirst = v.front();
    cout << nfirst;
    cout << nlast;
    cout << v.size();
}

void example() {
    std::vector<int> vec{ 10, 20, 30, 30, 20, 10, 10, 20 };
    std::vector<int> ve { 10, 20, 30, 30, 20, 10, 10, 20 };
 
    // Print original vector
    std::cout << "Original vector :";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << " " << vec[i];
    }
    std::cout << "\n";
 
    // Iterator that store the position of last element
    std::vector<int>::iterator pend;
 
    // std :: remove function call
    pend = std::remove(vec.begin(), vec.end(), 20);
 
    // Print the vector after std :: remove
    std::cout << "Range contains:";
    for (std::vector<int>::iterator p = vec.begin(); p != pend; ++p) {
        std::cout << ' ' << *p; 
    }
    std::cout << '\n';
 
    // Print original vector
    std::cout << "Original Vector :";
    for (int i = 0; i < ve.size(); i++) {
        std::cout << " " << ve[i];
    }
    std::cout << "\n";
 
    // std :: vector :: erase function call
    // erase the first 3 elements of vector vector
    ve.erase(ve.begin(), ve.begin() + 3);
 
    // Print the vector
    std::cout << "Vector contains :";
    for (int i = 0; i < ve.size(); i++) {
        std::cout << " " << ve[i];
    }

    std::cout << "\n";
}

void elemerase() {
    // erases only first found matching!
    vector<int> v = {6,2,89,321,5,123,7,1,0,123,-4,123};
    vector<int>::iterator it;

    /*
    it = find(v.begin(),v.end(),123);
    v.erase(it);
    it = find(v.begin(),v.end(),123);
    v.erase(it);
    */

    while ((it = find(v.begin(),v.end(),123)) != v.end()) {
        v.erase(it);
    }

    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, ","));
}

int main() {
    //findnum();
    //accesselem();
    elemerase();
    //example();
    return 0;
}
