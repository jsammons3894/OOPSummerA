#include <iostream>

class Elf{

public: 
Elf () {
    std::cout << "I am an elf" << std::endl;
}

void think () const {
    std::cout << "Let's not fight!" << std::endl;
}
};

class Warrior {
public:
Warrior () {
    std::cout << "I am a warrior" << std::endl;
}
void fight () const {
    std::cout << "SLASH!" << std::endl;
}
};

class ElfWarrior : public Elf, public Warrior {
public:
    ElfWarrior () {
        std::cout << "I am an Elf-Warrior" << std::endl;
    }
};

int main () {
    ElfWarrior legolas;

    legolas.fight();
    legolas.think();


    return 0;
}