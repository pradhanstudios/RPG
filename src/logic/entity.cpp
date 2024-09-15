#include "entity.hpp"

Entity::Entity(int base_health, int level, float level_multiplier) {
    this->base_health = base_health;
    this->level = level;
    this->level_multiplier = level;
    this->health = base_health + base_health * level * level_multiplier;
}