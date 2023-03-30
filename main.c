#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

//Implement function maxChar
char maxChar(char input[50]){
    int arr[99] = {0};
    int length;
    int i= 0;

    printf("Input string:");
    scanf("%s", input);

    while(input[i] != '\0'){
        length++;
        i++;
    }

    for(int i = 0; i<=length; i++){
        arr[i] = input[i];
    }

    int counter[128] = {0};
    for (int i = 0; i <= length; i++) {
        counter[arr[i]]++;
    }

    int amwenigbenutztAnzahl = 0;
    char amwenigbenutztZeichen ;
    for (int i = 0; i < 128; i++) {
        if (counter[i] > amwenigbenutztAnzahl && counter[i] > 0) {
            amwenigbenutztZeichen = i;
        }
    }
    return amwenigbenutztZeichen;
}

int main ()
{
    char input[50];

    while(1)
    {
        scanf(" %49s", input);
        if(input[1] == '\0') //Terminates if only one letter was entered
            return 0;
        printf("Most common char for %s is: %c\n", input, maxChar(input));
    }
}

