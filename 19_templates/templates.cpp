#include <iostream>
#include <string>
#include <vector>
using namespace std;

template<typename T>
T maxValue(const T& val1, const T& val2);

template<typename T>
T smallest(const T& n1, const T& n2, const T& n3);

template<typename T>
void print(const T& value);
void print(bool value);

// Find the max value in a vector
template<typename T>
T findMax(const vector<T>& vec);

int main() {
    double max1 = maxValue(6.7, 4.1);
    int max2 = maxValue(67, 41);
    char max3 = maxValue('a', 'z');
    string max4 = maxValue(string("apple"), string("banana"));

    double sml1 = smallest(6.7, 4.1, 3.0);
    int sml2 = smallest(41, 30, 67);
    char sml3 = smallest('a', '2', 'z');
    string sml4 = smallest(string("apple"), string("banana"), string("tomato"));
    
    vector<bool> vec1 = {true, false, false};
    vector<int> vec2 = {1, -3, 2};
    
    print(max1);
    print(max2);
    print(max3);
    print(max4);
    
    print(sml1);
    print(sml2);
    print(sml3);
    print(sml4);
    
    print(findMax(vec1));
    print(findMax(vec2));
}

template<typename T>
T maxValue(const T& val1, const T& val2) {
    return val1 > val2 ? val1 : val2;
}

template<typename T>
T smallest(const T& n1, const T& n2, const T& n3) {
    if (n1 < n2 && n1 < n3) {
        return n1;
    }
    return n2 < n3 ? n2 : n3;
}

template<typename T>
void print(const T& value) {
    cout << "Generic: " << value << endl;
}
void print(bool value) {
    cout << "Boolean: " << (value ? "true" : "false") << endl;
}

template<typename T>
T findMax(const vector<T>& vec) {
    if (vec.empty()) {
        throw string("findMax: empty vector");
    }
    T max = vec.at(0);
    for (T value : vec) {
        if (value > max) {
            max = value;
        }
    }
    return max;
}