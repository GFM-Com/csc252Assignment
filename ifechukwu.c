#include <stdio.h>

int main() {
    // Declare and initialize an array of food
    char *food[] = {"Beans", "Rice", "Yam", "Melon", "Bitterleaf"};
    
    // Print the food array
    for (int i = 0; i < 5; i++) {
        printf("%s\n", food[i]);
    }

     // Traverse and print the food array
    for (int i = 0; i < 5; i++) {
        printf("%s\n", food[i]);
    }

    // Concatenate the strings of the food array
    char concatenatedFood[100] = "";
    for (int i = 0; i < 5; i++) {
        strcat(concatenatedFood, food[i]);
        strcat(concatenatedFood, " ");
    }
    
    // Print the concatenated string
    printf("%s\n", concatenatedFood);

    return 0;
}


#include <stdio.h>

int main() {
    // Declare and initialize a two-dimensional array of names
    char names[3][10] = {
        "Alice",
        "Bob",
        "Charlie"
    };
    
    // Print the names array
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
