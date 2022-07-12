#include <cs50.h>
#include <stdio.h>

int main(void)
{  int usernum;
    /*Using a do while loop if the user does not enter a number from 1-8
     It will ask the getInt question until the user does enter a number from 1-8*/
    do{usernum = get_int("What is your height of pyraminds: ");}
    while(usernum<1  ||  usernum>8);
    /*if the user enters a number from 1-8 it will enter the following sequence*/
    if(usernum>0 && usernum<9){
    /* a for loop used to loop the amount of line breaks,hashtags and spaces based on the number the user has inputed*/
    for(int i = usernum;i-->0;){

        printf("\n");
        /* a for loop within a for loop,it loops each line the amount of times the user has inputed by puting this for loop in
        the parent for loop */
        /*using for loop to loop the amount of spaces on the left and hashtags is needed and minus */
        for(int j = usernum ;j>usernum-i;j--){
            printf(" ");}
        for(int y = 0;y<usernum-i;y++){
                printf("#");
             }


        /* the space inbetween the one hashstag row to the next*/
        printf("  ");
        /* for looping the next row of #*/
        for(int x = 0;x<usernum-i;x++)

        {
            printf("#");


         }

     }
     /*line break*/
     printf("\n");

}}

