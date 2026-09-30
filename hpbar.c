#include<stdio.h>

int main(void)
{

    int i,dmg,hp=10;
    printf("The Current HP:(%d/%d)\n",hp,hp);
    printf("[# # # # # # # # # #]\n");

    printf("Enter the amount of damage: ");
    scanf("%d",&dmg);

    if(dmg<0||dmg>hp)
    {
        printf("Invalid Input!!!!!!!!!");
        return 0;
    }

    hp-=dmg;
    printf("Current HP: (%d/10)",hp);

    printf("[");

    for(i=0; i<10; i++)
    {
        if(i<hp)
            printf("# ");
        else
            printf("0 ");
    }
    printf("]\n");

    if(hp == 0)
        printf("YOU ARE DEAD!!!!!!\nGAME OVER!!!!!!!!!!!!!!!!!");

    return 0;
}

