#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string title;
    int duration;
} Lecture;

int main() {
    Lecture oop_lecture;

    oop_lecture.title = "Classes and Objects";
    oop_lecture.duration = 3000;

    cout << "Title: " << oop_lecture.title << endl;
    cout << "Duration: " << oop_lecture.duration << endl;

    return 0;
}