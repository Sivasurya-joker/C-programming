#include <stdio.h>

void fillBottle(int *level) {
    *level = 90;
}

int main() {
    int BottleLevel;

    printf("Enter the bottle level in your hands: ");
    scanf("%d", &BottleLevel);
    if (BottleLevel < 90) {
        printf("It is not full kindly place on the knob...\n");
        fillBottle(&BottleLevel);   
        printf("Bottle is filled completely.\n");
    }
    else if (BottleLevel > 90) {
        printf("It is yet to be filled to drink it properly...\n");
    }
    else { 
        printf("Bottle is filled completely.\n");
    }

    printf("Final Bottle Level: %d\n", BottleLevel);
    return 0; 
}
