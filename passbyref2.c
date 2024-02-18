// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

  typedef struct pokemon{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[15];
  }pokemon;
     void change(pokemon *p){
    p->hp=70;
    p->attack=90;
    p->speed=500;
    return ;
  }
int main(){
 
  pokemon pikachu;
  pikachu.hp=60;
  pikachu.attack=70;
  pikachu.speed=100;
  pokemon*x=&pikachu;
  change(x);
  printf("%d\n",pikachu.hp);
  printf("%d\n",pikachu.attack);
   printf("%d",pikachu.speed);
   return 0;
}