// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

  typedef union pokemon{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[15];
  }pokemon;
int main(){
 
  pokemon pikachu;
  pikachu.hp=60;
  pikachu.attack=70;
  pikachu.speed=100;
  strcpy(pikachu.name,"Akhtar");
 
  printf("%d\n",pikachu.hp);
  printf("%d\n",pikachu.attack);
   printf("%d\n",pikachu.speed);
  printf("%s",pikachu.name);
   return 0;
}