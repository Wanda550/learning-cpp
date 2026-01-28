#include <iostream>
#include <string>

// scope refers to the area where a function or variable is visible and accessible to other code
// function scope, accessible only within the function
// block scope = local scope, accessible only within the block or inner blocks (if/else, for, while)
// file scope = global scope, accessible within the entire file (all blocks)

// generally avoid global variables unless
// ex) shared data (avoid repetitive function parameters), constant values

// global variable
int playerHealth = 500; // gPlayerHealth, g_playerHealth
const int MAX_PLAYER_HEALTH = 600; // cMaxPlayerHealth, g_maxPlayerHealth, MAX_PLAYER_HEALTH

void takeDamage(int damage) {
    playerHealth -= damage;

    if(playerHealth < 0){
        playerHealth = 0;
    }
}

void recoverHealth(int recovery) {
    playerHealth += recovery;

    if(playerHealth > MAX_PLAYER_HEALTH){
        playerHealth = 600;
    }
}

int main() {
 
    std::cout << "Player Health: " << playerHealth << std::endl;

    takeDamage(700);
    std::cout << "Player Health: " << playerHealth << std::endl;

    recoverHealth(120);
    std::cout << "Player Health +120: " << playerHealth << std::endl;
}