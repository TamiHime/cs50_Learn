
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void){
    
    float a;
    int coins;
    int count = 0;
    do{ 
        a = get_float("Change owed: ");
    } while( a < 0); //change owed as a non-negative number
    
    int cents = round(a*100);
    //printf("%i\n",cents);
    coins = cents; // begin with change owed
    
    while (coins >=25){
        count++;
        coins -=25;
    }
    
    while (coins >=10){
        count++;
        coins -=10;
    }
    
    while (coins >= 5){
        count++;
        coins -=5;
    }
    
    while (coins >= 1){
        count++;
        coins -=1;
    }
    
    printf("%i\n", count); //prints the coin needed for change
}