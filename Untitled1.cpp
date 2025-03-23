#include <stdio.h>
#include <math.h> 

int main() {
    int popularity, size;
    double homeValue;

    
    printf("Enter the popularity of the neighborhood: ");
    scanf("%d", &popularity);

    
    printf("Enter the size of the house: ");
    scanf("%d", &size);

    
    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;

    
    printf("The found home value is: %.0f TL\n", homeValue);

    return 0;
}



