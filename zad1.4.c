#include <stdio.h>

void print_multiplication_table() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }
}

int main() {
    print_multiplication_table();
    return 0;
}
