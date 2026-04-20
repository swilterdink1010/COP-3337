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
    Knife(bool stainless = false) : is_stainless(stainless) {}
    void use() override {
        cout << (shot_count++ % 2 == 0 ? "SWISH!" : "STAB!") << endl;
    }
    bool getIsStainless() const {
        return is_stainless;
    }
private:
    static int shot_count;
    bool is_stainless;
};
int Knife::shot_count = 0;

class Player {
public:
    void use(Weapon &weapon) {
        // Dynamic Casting
        Knife* knife = dynamic_cast<Knife*>(&weapon); // Cast from parent to child pointer
        if (knife != nullptr && knife->getIsStainless()) {
            std::cout << "Stainless knife. Can use it." << std::endl;
            knife->use();
        }
        else if (knife != nullptr && !knife->getIsStainless()) {
            std::cout << "Cannot use non-stainless knife." << std::endl;
        }
        else {
            std::cout << "Not a knife." << std::endl;
        }
    }
};

int main() {
    Gun gun;
    MachineGun mg;
    Bazooka bz;
    Knife kn;
    Knife stainless(true);

    cout << "Array" << endl;
    Weapon* weapons[5] = {&gun, &mg, &bz, &kn, &stainless};
    
    for (Weapon* weapon : weapons) {
        weapon->use();
    }

    cout << endl << "Player" << endl;
    Player simple;
    simple.use(gun);
    simple.use(mg);
    simple.use(bz);
    simple.use(kn);
    simple.use(stainless);

    return 0;
}