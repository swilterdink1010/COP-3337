#include <iostream>
#include <iomanip>
#include <random>

int main(void) {
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<int> dist(1,6);

    std::string prefix[] = {"First", "Second", "Third"};
    int sum;

    for (int i = 0; i < 3; i++) {
        int die1 = dist(eng);
        int die2 = dist(eng);
        sum += die1 + die2;

        std::cout << prefix[i] << " Roll: " << die1 << " " << die2 << std::endl;
    }

    float avg = (float)sum / 3.0;

    std::cout << "..." << std::endl << "Average total: " << std::setprecision(3) << avg << std::endl;

    return 0;
}