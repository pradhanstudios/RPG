class Entity {
    // health at level 1
    int base_health;
    // health at the current level
    int health;
    int level;
    // how much stats should multiply based on level
    float level_multiplier;

    public:
    Entity(int base_health, int level, float level_multiplier=0.1);

};