#include <iostream>
#include <string>
using namespace std;

void print_combinations(int n);
void combinations_helper(string& s, int n, int i);
void print_unique(int n);
void unique_helper(string& s, int n, int i);
bool check_unique(string s, int n);

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    // print_combinations(n);
    print_unique(n);

    return 0;
}

void print_combinations(int n) {
    string s(n, 'a');
    combinations_helper(s, n, 0);
}

void combinations_helper(string& s, int n, int i) {
    if (i >= n) {
        cout << s << endl;
        return;
    }
    while (s[i] <= 'z') {
        combinations_helper(s, n, i + 1);
        s[i]++;
    }
    s[i] = 'a';
}

void print_unique(int n) {
    string s(n, 'a');
    unique_helper(s, n, 0);
}

void unique_helper(string& s, int n, int i) {
    if (i >= n) {
        if (check_unique(s, n))
        cout << s << endl;
        return;
    }
    while (s[i] <= 'z') {
        unique_helper(s, n, i + 1);
        s[i]++;
    }
    s[i] = 'a';
}

bool check_unique(string s, int n) {
    char temp;
    for (int i = 0; i < n; i++) {
        temp = s[i];
        s[i] = '*';
        if (s.find(temp) != string::npos) {
            return false;
        }
        s[i] = temp;
    }
    return true;
}