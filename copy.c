// Online C compiler to run C program online
#include <stdio.h>

int main() {
   typedef struct pokemon{
       int attack;
       int hp;
       int speed;
       char tier;
       char name[15];
       
   }pokemon;
   pokemon a,b,c;
   a.attack=100;
   a.hp=100;
   a.speed=90;
   a.tier='A';
   strcpy(a.name,"Blastoise");
   b=a;
   printf("%d\n",b.attack);
   printf("%d\n",b.speed);
   strcpy(b.name,"Charizard");
   printf("%s",b.name);
    return 0;
}