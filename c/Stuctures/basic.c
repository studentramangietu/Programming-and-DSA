#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon    // basically a class// declaring a self data structure(structure)
    {
        int hp;
        int speed;
        int attack;
        char tier;          
        char name[50];                          //strng problem(alwqays use strcpy() fuunction)

    }charizard,pikachu,mewtoo;      /// these are the objects of the class pokemon                     ///here directly we can declare the pokemon names n classify them
    ///struct pokemon charizard;
    charizard.hp=100;
    charizard.speed=80;
    charizard.attack=120;
    charizard.tier='A';   ///it can be acess by dot operator
    strcpy(charizard.name,"Charizard baby");

    printf("%c\n",charizard.tier);
    printf("%d\n",charizard.hp);
    printf("%d\n",charizard.attack);
    printf("%d\n",charizard.speed);
    printf("%s",charizard.name);
    
    return 0;
}
///typedef ---> this function can store float data type to any other declared variable