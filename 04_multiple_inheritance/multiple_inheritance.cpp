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

// "What do we name our elf?" //Igor

// "Legolas, from lord of the rings??" //Jacob

// "I cannot spell that- Legoland?" //Igor