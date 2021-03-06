#include "Player.h"

//Default Constructor
Player::Player() {
    Name = "None";
    Class = "None";
    CurExp = -1;
    BufferExp = -1;
    
    //Generating exp table for leveling up
    for (int i = 1; i <= 50; i++) {
        MaxExp.push_back((i * 10) * 2);
    }

    Level = 0;
    Strength = 0;
    Dexterity = 0;
    Intelligence = 0;
    Wisdom = 0;
    Charisma = 0;
    CurHealth = 0.0f;
    MaxHealth = 0.0f;
}

//Parameterized Constructor
Player::Player(std::string name, std::string spec) {
    Name = name;
    Class = spec;
    CurExp = 0;
    BufferExp = 0;

    //Generating exp table for leveling up
    for (int i = 1; i <= 50; i++) {
        int temp = i * 10 * 2;
        MaxExp.push_back(temp);
    }
    //std::cout << "Size test: " << MaxExp.size() << std::endl;

    Level = 1;
    Strength = 1;
    Dexterity = 1;
    Intelligence = 1;
    Wisdom = 1;
    Charisma = 1;
    CurHealth = 10.0f;
    MaxHealth = 10.0f;
}

//Increase CurrentHealth by input amount
void Player::RegenHealth(float health) {
    CurHealth += health;
}

//Return that the player is dead
bool Player::PlayerDeath() { isDead = true; return isDead; }

//Sets and Gets
int Player::GetCurrentHealth() { return CurHealth; }
int Player::GetMaxHealth() { return MaxHealth; }
int Player::GetStrength() { return Strength; }
int Player::GetDexterity() { return Dexterity; }
int Player::GetIntelligence() { return Intelligence; }
int Player::GetWisdom() { return Wisdom; }
int Player::GetCharisma() { return Charisma; }
void Player::SetCurrentHealth(float amount) { CurHealth = amount; }
void Player::SetMaxHealth(float amount) { MaxHealth = amount; }
void Player::SetStrength(int amount) { Strength = amount; }
void Player::SetDexterity(int amount) { Dexterity = amount; }
void Player::SetIntelligence(int amount) { Intelligence = amount; }
void Player::SetWisdom(int amount) { Wisdom = amount; }
void Player::SetCharisma(int amount) {Charisma = amount; }

int Player::GetCurExp() { return CurExp; }
int Player::GetMaxExp() { return MaxExp[Level]; }
int Player::GetLevel() { return Level; }

    //Adding Attributes
void Player::AddStrength(int amount) { Strength += amount; }
void Player::AddDexterity(int amount) { Dexterity += amount; }
void Player::AddIntelligence(int amount) { Intelligence += amount; }
void Player::AddWisdom(int amount) { Wisdom += amount; }
void Player::AddCharisma(int amount) { Charisma += amount; }
    //Subtracting Attributes
void Player::RemoveStrength(int amount) { Strength -= amount; }
void Player::RemoveDexterity(int amount) { Dexterity -= amount; }
void Player::RemoveIntelligence(int amount) { Intelligence -= amount; }
void Player::RemoveWisdom(int amount) { Wisdom -= amount; }
void Player::RemoveCharisma(int amount) { Charisma -= amount; }

//Increase CurExp by input amount, if player gains a level, store buffer to add to next
//CurExp amount after level up.
void Player::GainExp(int amount) {
    CurExp += amount;
    int temp = MaxExp[Level];
    if (CurExp >= temp) {
        if (CurExp > temp) {
            BufferExp = CurExp - temp;
        }
        LevelUp();
        GainExp(BufferExp);
        BufferExp = 0;
    }
}

//Level up function to increment attributes, and restore some health
void Player::LevelUp() {
    ++Level;
    ++Strength;
    ++Dexterity;
    ++Intelligence;
    ++Wisdom;
    ++Charisma;
    RegenHealth(Level * 10);
}
