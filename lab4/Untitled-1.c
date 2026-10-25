#include <stdio.h>

typedef enum { WARRIOR, MAGE, ROGUE } Role;

typedef struct {
    char name[20];
    int health;
    Role character_role;   // Enum inside a Struct!
} Player;

int main() {
    Player p1 = {"Gandalf", 100, MAGE};

    if (p1.character_role == MAGE) {
        printf("%s casts a spell!\n", p1.name);
    }

    return 0;
}
