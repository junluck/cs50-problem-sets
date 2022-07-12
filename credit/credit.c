#include <cs50.h>
#include <stdio.h>

int multiplyer(int x);
int main(void)
{

    long long int userin=get_long_long("What is your card number: ");
    if(userin>1000000000000000 && userin<9999999999999999 && ((userin/100000000000000 == 51 )||(userin/100000000000000 == 52)||(userin/100000000000000 == 53)||(userin/100000000000000 == 54) ||
    (userin/100000000000000 == 55) )){
    long long int i   = userin%1000000000000000/100000000000000;
    long long int j = userin%10000000000000/1000000000000;
    long long int k = userin%100000000000/10000000000;
    long long int l = userin%1000000000/100000000;
    long long int m = userin%10000000/1000000;
    long long int n = userin%100000/10000;
    long long int o = userin%1000/100;
    long long int p = userin%10/1;
    long long int ansone = userin%10000000000000000/1000000000000000;
    long long int anstwo = userin%100000000000000/10000000000000;
    long long int ansthree = userin%1000000000000/100000000000;
    long long int ansfour = userin%10000000000/1000000000;
    long long int ansfive= userin%100000000/10000000;
    long long int anssix= userin%1000000/100000;
    long long int ansseven = userin%10000/1000;
    long long int anseight = userin%100/10;


    int a=multiplyer(ansone);
    int b=multiplyer(anstwo);
    int c=multiplyer(ansthree);
    int d=multiplyer(ansfour);
    int e=multiplyer(ansfive);
    int f=multiplyer(anssix);
    int g=multiplyer(ansseven);
    int h=multiplyer(anseight);
    int total = a + b + c + d + e + f+ g + h + i + j + k + l+ m + n + o + p;
    int checksum = total % 10;
    printf("%i",total);
    if(checksum == 0){

        printf("Card number %i",);

        }
    else if (checksum!= 0)
    {
        printf("This card is invalid");
    }
    }
}

int multiplyer(int x){
    int times=x* 2 / 10;
    int timestwo= x*2%10;
    return times + timestwo;
    }


