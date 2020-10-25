
#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main(void){
    string s = get_string("Text: ");
    //printf("There are %f letters \n", letters);
    
    float letters = 0; 
    float words = 1;
    float sentence = 0;
    
    for (int i = 0, n = strlen(s); i < n; i++){
        if (isalpha(s[i])){
            letters++;
            //printf("%f letters\n", letters);
        }
        if (isspace(s[i])){
            words++;
        }
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            sentence++;
        }
    }

    //printf("%f letters\n", letters);
    //printf("%f words\n", words);
    //printf("%f sentence\n", sentence);
    
    float L = (letters/words)*100;
    float S = (sentence/words)*100;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int indexi = round(index);
 
    if (indexi >= 0 && indexi < 16) 
    {
        printf("Grade %i\n", indexi);
    }
    else if (indexi >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}