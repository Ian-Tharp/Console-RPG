#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <vector>

class Player {
    public:
        Player();
        Player(std::string name, std::string spec);

        void GainExp(int amount);
        void LevelUp();

        //Player health status
        int GetCurrentHealth();
        int GetMaxHealth();
        void SetCurrentHealth(float amount);
        void SetMaxHealth(float amount);

        void RegenHealth(float health);
        bool PlayerDeath();

        //Attributes
        int GetStrength();
        int GetDexterity();
        int GetIntelligence();
        int GetWisdom();
        int GetCharisma();
        void SetStrength(int amount);
        void SetDexterity(int amount);
        void SetIntelligence(int amount);
        void SetWisdom(int amount);
        void SetCharisma(int amount);

    private:
        std::string Name;
        std::string Class;
        int CurExp;
        int BufferExp;
        std::vector<int> MaxExp;

        int Level;
        int Strength, Dexterity, Intelligence, Wisdom, Charisma;
        float CurHealth;
        float MaxHealth;
        bool isDead;
};