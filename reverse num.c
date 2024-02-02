#include <stdio.h>
#include <stdlib.h>
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}
int main() {
    char input[50];
    int num;
    printf("Enter a number: ");
    scanf("%s", input);
      if (sscanf(input, "%d", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; 
    }
    int reversedNum = reverseNumber(num);
    printf("Reversed number: %d\n", reversedNum);
return 0;    
}
