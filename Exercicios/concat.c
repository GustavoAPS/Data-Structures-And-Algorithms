#include <stdio.h>
#include <stdlib.h>

char* concat(char* string_1, char* string_2)
{
    char* string_concatenada;
    string_concatenada = malloc( sizeof(string_1) + sizeof(string_2));



    return string_concatenada;
}

int main()
{
    char* string_1 = "11111111";
    char* string_2 = "22222222";

    int size = sizeof(string_1) + sizeof(string_2); 
  
    char *str = (char *)malloc(sizeof(char)*size);

    *(str) = string_1;  
    (str+sizeof(string_2)) = string_2;   
    //*(str+2) = 'G';     
    //*(str+3) = '\0';   
    //*(str+1) = 'n';  /* No problem: String is now GnG */
   

    printf("A string concatenada vai ser: %s\n",str);
 
    return 0;
}