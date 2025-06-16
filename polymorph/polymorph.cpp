#include <iostream>

class Gun {
    public:
        virtual void use() const {
            std::cout << "BANG!" << std::endl;
        }
};

class MachineGun : public Gun {
    public:
        void use() const override {
            int magazine = 50;
            while (magazine--) {
                Gun::use();
            }
            std::cout << "*click*" << std::endl << std::endl;
        }
};


class Bazooka : public Gun {
    public:

            void use() const override {
                std::cout << "BOOOOOM!" << std::endl;
            }
};

class Weapon {
    public:
    virtual void use() const  = 0; //pure virtual function, abstract class
};

class Knife : public Weapon {
public:
    void use() const override {
        std::cout << "stabby stab" << std::endl;
    }
    bool is_stainless;
};

class Player {
    public:
        void attack(const Weapon& weapon) {
            //Dynamic casting
            const Knife* knife = dynamic_cast<const Knife*>(&weapon);
            if (knife != NULL){
                if (knife->is_stainless) {
                    std::cout << "Stainless steel Knife! You can use it." << std::endl;
                    weapon.use();
                }
                else{
                    std::cout << "Not stainless steel- You cannot use this." << std::endl;
                }
            }
            else {
                std::cout << "Not a knife- cannot use.";
            }
            //weapon.use();
        }
};


int main() {

    Gun gun;
    MachineGun mGun;
    Bazooka b;
    Knife k;

    // gun.shoot();
    // mGun.shoot();

    // Gun* gun_ptr = &gun;
    // gun_ptr->shoot();
    // Gun* gun2_ptr = &mGun;
    // gun2_ptr->shoot();

    Player p;
    p.attack(mGun); //pass player machine gun

    p.attack(b); //pass player bazooka

    p.attack(k); //pass player knife

    p.attack(gun); //pass player gun



    return 0;
}