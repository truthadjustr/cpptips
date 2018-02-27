#include <iostream>
#include <vector>
#include <algorithm>

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

int main() {
    //findnum();
    accesselem();
    return 0;
}
