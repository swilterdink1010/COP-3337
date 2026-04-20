#include <iostream>
using namespace std;

class Being {
public:
    Being(int hp = 100) : hp(hp) {
        cout << "Being Constructor" << endl;
    }
// private:
    int hp;
};

class Elf : virtual public Being {
public:
    Elf() {
        cout << "I am an Elf!" << endl;
    }
    void think() const {
        cout << "Let's not fight!" << endl;
    }
};

class Warrior : virtual public Being {
public:
    Warrior() {
        cout << "I am a Warrior!" << endl;
    }
    void fight() const {
        cout << "RAAAAAAAAAAH!" << endl;
    }
};

class ElfWarrior : public Elf, public Warrior {
public:
};

int main() {
    ElfWarrior buddy;

    buddy.think();
    buddy.fight();
    
    cout << buddy.hp << endl;

    return 0;
}