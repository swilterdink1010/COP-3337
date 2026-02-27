#include <iostream>
#include <string>
using namespace std;

typedef struct {
private:
    string source;
    string destination;
    int length;

public:
    void print() {
        cout << source << " -> " << destination
            << ": " << length << endl;
    }

    void getRoute() {

    }

    void setRoute(string source, string destination, int length) {
        this->source = source;
        this->destination = destination;
        this->length = length;
    }
} Route;


int main() {
    Route spring_break_trip;

    // spring_break_trip.source = "Lakeland";
    // spring_break_trip.destination = "Orlando";
    // spring_break_trip.length = 50;

    // spring_break_trip.destination = "New York";

    spring_break_trip.print();

    return 0;
}