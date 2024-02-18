// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon arr[3];
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"charizard");
    arr[1].attack=70;
    arr[1].hp=800;
    arr[1].speed=35;
    arr[1].tier='s';
    strcpy(arr[0].name,"mewtwo");
    
    for(int i=0;i<2;i++){
        printf(" attack %d\n",arr[i].attack);
         printf(" speed %d\n",arr[i].speed);
          printf("hp %d\n",arr[i].hp);
           printf(" tier %c\n",arr[i].tier);
            printf("name %s\n",arr[i].name);
    }
    return 0;
}
