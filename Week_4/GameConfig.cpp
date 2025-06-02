#include <iostream>

class GameConfig {
    public:
    int player_difficulty; //0 = easy, 1 = normal, 2 = hard
    static int default_difficulty;

    GameConfig() : player_difficulty(default_difficulty){}

    void showConfig () const {
        std::cout <<"Player Difficulty: " << player_difficulty << std::endl;
    }

};

//initalize static member
int GameConfig::default_difficulty = 1;

int main() {
    //access the static variavle with creating an object

    std::cout << "Default Difficulty is " << GameConfig::default_difficulty << std::endl;

    GameConfig player1;
    GameConfig player2;

    player1.showConfig();
    player2.showConfig();

    GameConfig::default_difficulty = 2;

    GameConfig player3;
    player3.showConfig();
    
    return 0;
}