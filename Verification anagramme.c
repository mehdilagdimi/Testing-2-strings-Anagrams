#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void swap(char *ch1, char *ch2){
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}
void selectionSort(char str[20]){
     int i, j, min_idx;
    //int realSize = strlen(str);
    //char STR =
    for (i = 0; i < strlen(str) - 1; i++)
    {
        min_idx = i;
        for (j = i+1; j < strlen(str) ; j++)
          if (str[j] < str[min_idx])
            min_idx = j;
        swap(&str[min_idx], &str[i]);
    }
}
bool isAnagram(char str1[20], char str2[20]){
   if (!strcmp(str1, str2)){ return true;}
   else return false;
}

void main(){
    int size = 20;
    char str1[size];
    char str2[size];

    printf("\nVérification si 2 chaines de characteres constituent une anagramme:\nEntrer la 1ere chaine : ");
    scanf(" %s", str1);
    printf("\nEntrer la 2eme chaine : ");
    scanf(" %s", str2);

    //convertToLowerCase(str1, str2);

    selectionSort(str1);
    selectionSort(str2);

    printf("\nFirst string sorted %s, second string sorted %s", str1, str2);
    if (isAnagram(str1, str2))
        printf("\n\n%s and %s constitute an Anagram", str1, str2); //will it consider lowercase same as uppercase
    else
        printf("\n\n%s and %s don't constitute an Anagram", str1, str2);
}
