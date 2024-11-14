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
        string name;

        Player::Player(string name, int health, int attackPower){
            cout << "Initializing Player" << endl << name << "Is created!" << endl;
        }

        Player::~Player(){
            cout << "Destructor called" << endl;
        }

        void Attack(){
            cout << "Attack!" << endl;
        }

        void takeDamage(int damageTaken) {
            health -= damageTaken;
            showHealth();
        }

        void Heal(){
            health += 10;
            showHealth();
        }
    private:
        void showHealth(){
            cout << "Health: " << health << endl;
        }

        void showAttackPower(){
            cout << "Attack Power: " << attackPower << endl;
        }

        
};

int main() {
    //used repl.it too much in college so I have to make github repos

    gameStory();
    Player player = Player("Ultimate Unit", 10, 20);

    return 0;
}