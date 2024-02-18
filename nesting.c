// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int main() {
  typedef struct pokemon{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[15];
  }pokemon;
  typedef struct legendarypokemon{
  pokemon normal;
  char ability[20];
  }legendarypokemon;
  legendarypokemon mewtwo;
  strcpy(mewtwo.ability,"pressure");
  mewtwo.normal.hp=150;
  mewtwo.normal.attack=500;
  strcpy(mewtwo.normal.name,"mewtwo");
  printf("%d\n",mewtwo.normal.hp);
  strcpy(mewtwo.ability,"pressure create");
  printf("%s",mewtwo.ability);
    return 0;
}