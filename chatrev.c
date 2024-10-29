#include <stdio.h>
#include <math.h>

int reverseNumber(int num, int digits) {
    int reversed = 0;
    for (int i = 0; i < digits; i++) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num, digits;

    printf("Enter the number of digits: ");
    scanf("%d", &digits);

    printf("Enter the number: ");
    scanf("%d", &num);

    int reversed = reverseNumber(num, digits);

    printf("Reversed Number: %d\n", reversed);

    return 0;
}



// #include <stdio.h>

// int reverseNumber(int num) {
//     int reversed = 0;
//     while (num != 0) {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }
//     return reversed;
// }

// int main() {
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     int reversed = reverseNumber(num);

//     printf("Reversed Number: %d\n", reversed);

//     return 0;
// }

