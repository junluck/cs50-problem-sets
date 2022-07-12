#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // propmpt user to innput height of pyramids
    int usernum = get_int("What is your height of pyraminds: ");

    // calling a for loop for the input above
    for(int i = usernum;i-->0;){
    // line break
        printf("\n");
    // callinng a for loop in a for loop so it can loop each line the amount of pyramid height has been inputed.
        for(int j = usernum ;j-->0-i;){
            printf(" ");}
        for(int y = 0;y<usernum-i;y++){
                printf("#");
             }



        printf("  ");

        for(int x = 0;x<usernum-i;x++)

        {
            printf("#");


         }
         for(int z = usernum ;z-->1-i;){
            printf(" "); }

    }
    printf("\n"); }
