#include <iostream>

using namespace std;

int playerHealth = 100;
int attack = 20;
int defense = 10;
int healing = 15;

int TakeDamage(int damageToInflict) {
    playerHealth -= damageToInflict;
    if(playerHealth <= 0) {
        playerHealth = 0;
        cout << "You are dead! \n";
    }
    cout << "You took " << damageToInflict << " damage! \n";
    cout << "Your health is now " << playerHealth << " points! \n";
    return playerHealth;
}

int Heal(int amountToHeal) {
    playerHealth += amountToHeal;
    cout << "You healed " << amountToHeal << " health! \n" <<
    "Your health is now " << playerHealth << " points! \n";
    return playerHealth;
}

int DamageMultiplier(float multiplier) {
    attack *= multiplier;
    cout << "Your attack is now " << attack << " points! \n";
    return attack;
}
int main() {
    //used repl.it too much in college so I have to make github repos
    cout << "Hello, World! I'm a C++ program! \n" << 
    "I'm here to show you how the world works... \n" << 
    "Maybe by punishment? Or by help! \n" << 
    "Don't worry, we'll find out together! \n" <<
    "Just know, that C++ isn't easy! So our challenges won't be easy either! \n" <<
    "But we can do it! \n";

    int enemyHealth = 100;
    int playerLives = 3;
    string playerID = "1ABC23";
    float winRate = 0.8;
    bool playerWon = false;
    char playerType = 'A';

    int enemyDamage = 20;

    playerHealth = TakeDamage(enemyDamage);
    playerHealth = Heal(healing);
    attack = DamageMultiplier(1.5);

    return 0;
}