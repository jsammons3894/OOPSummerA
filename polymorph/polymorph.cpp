#include <iostream>

class Gun {
    public:
        virtual void shoot() const {
            std::cout << "BANG!" << std::endl;
        }
};

class MachineGun : public Gun {
    public:
        void shoot() const override {
            int magazine = 50;
            while (magazine--) {
                Gun::shoot();
            }
            std::cout << "*click*" << std::endl << std::endl;
        }
};

class Player {
    public:
        void shoot(const Gun& gun) const {
            gun.shoot();
        }
};

class Bazooka : public Gun {
    public:

            void shoot() const override {
                std::cout << "BOOOOOM!" << std::endl;
            }
};


int main() {

    Gun gun;
    MachineGun mGun;

    // gun.shoot();
    // mGun.shoot();

    // Gun* gun_ptr = &gun;
    // gun_ptr->shoot();
    // Gun* gun2_ptr = &mGun;
    // gun2_ptr->shoot();

    Player p;
    p.shoot(mGun); //pass player machine gun

    Bazooka b; 
    p.shoot(b); //pass player bazooka

    return 0;
}