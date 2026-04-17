#include <iostream>
#include <cstdlib>
using namespace std;

// Abstract Class
class Weapon {
public:
    virtual void use() = 0; // Abstract method
};

class Gun : public Weapon {
public:
    void use() override {
        cout << "BANG!" << endl;
    }
};

class MachineGun : public Gun {
public:
    MachineGun() : magazine(20) {

    }
    void use() override {
        for (int i = 0; i < magazine; magazine--) {
            cout << "BANG ";
        }
        cout << endl;
        magazine = 20;
    }
private:
    int magazine;
};

class Bazooka : public Gun {
public:
    void use() override {
        cout << (shot_count++ % 2 == 0 ? "KABOOM!" : "KABLOW!") << endl;
    }
private:
    static int shot_count;
};
int Bazooka::shot_count = 0;

class Knife : public Weapon {
public:
    void use() override {
        cout << (shot_count++ % 2 == 0 ? "SWISH!" : "STAB!") << endl;
    }
private:
    static int shot_count;
};
int Knife::shot_count = 0;

class Flashbang : public Weapon {
public:
    void use() override {
        system("color F0");
    }
};

class Player {
public:
    void use(Weapon &weapon) {
        weapon.use();
    }
};

int main() {
    Gun gun;
    MachineGun mg;
    Bazooka bz;
    Knife kn;
    Flashbang flash;

    flash.use();

    cout << "Array" << endl;
    Weapon* weapons[4] = {&gun, &mg, &bz, &kn};
    
    for (Weapon* weapon : weapons) {
        weapon->use();
    }

    cout << endl << "Player" << endl;
    Player simple;
    simple.use(gun);
    simple.use(mg);
    simple.use(bz);
    simple.use(kn);

    return 0;
}