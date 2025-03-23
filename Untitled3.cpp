#include <stdio.h>
#include <math.h>


int computeHomeValue(int popularity, int size);

int main() {
    int popularity, size, homeValue;

    
    printf("Please enter the popularity: ");
    scanf("%d", &popularity);

    
    printf("Please enter the size: ");
    scanf("%d", &size);

    
    homeValue = computeHomeValue(popularity, size);
    printf("Estimated home value: %d TL\n", homeValue);

    return 0;
}


int computeHomeValue(int popularity, int size) {
    int value;
    value = (pow(popularity, 3) + pow(size, 2)) * 10000;
    return value;
}

