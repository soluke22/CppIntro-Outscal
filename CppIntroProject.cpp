#include <iostream>

using namespace std;



void gameStory(){
    cout << "Hello, World! I'm a C++ program! \n" << 
    "I'm here to show you how the world works... \n" << 
    "Maybe by punishment? Or by help! \n" << 
    "Don't worry, we'll find out together! \n" <<
    "Just know, that C++ isn't easy! So our challenges won't be easy either! \n" <<
    "But we can do it! \n";
}

class Player{
    public:
        int health;
        int attackPower;

        Player::Player(int health, int attackPower){
            health = 100;
            attackPower = 10;
        }

        Player::~Player(){
            cout << "Destructor called" << endl;
        }
};

int main() {
    //used repl.it too much in college so I have to make github repos

    gameStory();
    Player player = Player(10, 20);

    return 0;
}