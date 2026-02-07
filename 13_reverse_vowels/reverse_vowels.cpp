#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseVowels(string s);
string reverse(string s);

int main() {
    string s5("01 - 40\n:sArutciL\n)2.11 retpihC( sceseB ratneoP ,)7.21 ,6.21(sritcoV ,)7 ratpehC( syurri ,)6-ritpohC( snuetcneF ,)5-ratpahC( spaeL ,)4-ritpehC( sgnertS dne sratcurihC\n:sratpohC kiubtxeT\n)doksa ab llaw snuetsioq01( .skrim 01 :skreM lateT\n.setonom 02 raf ,sselCgnarad ,)yedsandiW( 6202/11/20 :ameT & otoD\n.ssalc yedsundiW roa ne 2 zAaQ avehet gnoog ire aw ,ridnamer kceuq e");
    cout << reverse(reverseVowels(s5)) << endl;
}

string reverseVowels(const string s) {
    const string VOWELS("aeiouAEIOU");
    vector<int> keys;
    vector<char> letters;

    for (int i = 0; i < s.length(); i++) {
        if (VOWELS.find(s[i]) != string::npos) {
            keys.push_back(i);
            letters.push_back(s[i]);
            // cout << letters.back();
        }
    }

    string reverse = s;
    
    while (keys.size() > 0) {
        reverse[keys.front()] = letters.back();
        keys.erase(keys.begin());
        letters.erase(letters.end() - 1);
    }

    return reverse;
};

string reverse(const string s) {
    int length = s.length() - 1;
    string reverse = s;
    for (int i = 0; i <= length; i++) {
        reverse[i] = s[length - i];
    }
    
    return reverse;
}