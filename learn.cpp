#include <iostream>
#include <vector>
#include <list>
#include <tuple>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> add2vector() {
    vector<int> v;

    cout << v.size();
    v.push_back(3);
    v.push_back(5);
    cout << v.size();
    return v;
}

int findn() {
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

void vector_order() {
    list<int> arr;
    for(int i = 0;i < 10;i++) {
        arr.push_front(i);
    }
    for(list<int>::iterator it = arr.begin();it != arr.end();it++) {
        cout << *it << endl;
    }
}

void do_input() {
    int a,b;
    int c;
    int n;
    vector<vector<int>> vv;

    cin >> a >> b;
    //cout << a << "," << b << endl;
 
    for (int j = 0;j < a;j++) {      
        vector<int> v;
        cin >> c;
        for (int i = 0; i < c;i++) {
            cin >> n;
            v.push_back(n);
        }
        /*
        for (vector<int>::iterator it = v.begin();it != v.end();it++) {
            cout << *it << ",";
        }
        */
        vv.push_back(v);
    }
    int q1,q2;
    vector<tuple<int,int>> queries;
    for (int q = 0; q < b; q++) {
        cin >> q1 >> q2;
        //cout << q1 << "/" << q2;
        queries.push_back(tuple<int,int>(q1,q2)); 
    }
    cout << "\n************\n";

    for (vector<tuple<int,int>>::iterator qiter = queries.begin(); 
        qiter != queries.end(); qiter++) {
        //cout << *qiter << endl;
        int v1,v2;  
        v1 = get<0>(*qiter);
        v2 = get<1>(*qiter);
        //cout << v1 << ";" << v2 << endl;

        
        vector<int> qvector = vv[v1];
        int value = qvector[v2];
        cout << value;
    }

    cout << "\n************\n";
    /*
    for (vector<vector<int>>::iterator iii = vv.begin(); iii != vv.end(); iii++) {
        vector<int> v0 = *iii;
        for(vector<int>::iterator iter = v0.begin(); iter != v0.end();iter++) {
            cout << *iter << ","; 
        }
        cout << endl;
    }
    */

    /* haha
    vector<int> vector1 = vv[0];
    for (vector<int>::iterator it = vector1.begin();it != vector1.end();it++) {
        cout << *it;
    }
    */
}

int main() {
    //findn();
    //accesselem();
    //elemerase();
    //example();

    /*
    vector<int> v = add2vector();
    cout << endl;
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, ","));
    */

    //vector_order();  
    
    //do_input();

    return 0;
}
