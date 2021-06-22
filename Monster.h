#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <string>

class Monster {
    public:
        //Constructors
        Monster();
        Monster(std::string name);

        void Randomization();

        int CalculateDamageAmount();
        void DealDamage();
        void TakeDamage(int amount);

        //Sets and Gets
        int GetCurrentHealth();
        int GetMaxHealth();
        void SetCurrentHealth(float amount);
        void SetMaxHealth(float amount);

        void RegenHealth(float health);

        bool MonsterDeath();
        int DroppedExperience();

    private:
        std::string Name;
        int Level;
        //Attributes
        int Strength, Dexterity, Intelligence, Wisdom;
        float CurrentHealth, MaxHealth;
        
        //Calculation stats
        int DamageAmount, SpellAmount;
        float DodgeChance, ParryChance, HitChance;
        
        bool isDead;
};