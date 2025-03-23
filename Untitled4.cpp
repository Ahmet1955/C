#include <stdio.h>
#include <math.h>


void computeHomeValue(void);

int main() {
    computeHomeValue(); 
    return 0;
}


void computeHomeValue(void) {
    int popularity, size;
    int value;

    
    printf("Please enter the popularity: ");
    scanf("%d", &popularity);

    printf("Please enter the size: ");
    scanf("%d", &size);

   
    value = (pow(popularity, 3) + pow(size, 2)) * 10000;

    
    printf("Estimated home value: %d TL\n", value);
}

