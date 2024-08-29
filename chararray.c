#include <stdio.h>
#include <string.h>

int main() {
   
    char name[20] = "John Doe"; 


    printf("Name: %s\n", name); 

   
    name[0] = 'M';
    printf("Modified Name: %s\n", name);


    int length = strlen(name);
    printf("Length of Name: %d\n", length); 

    return 0;
}