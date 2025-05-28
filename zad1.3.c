#include <stdio.h>

void print_tree(int levels) {
    for (int i = 0; i < levels; i++) {
        for (int j = 0; j < levels - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < levels - 1; i++) {
        printf(" ");
    }
    printf("*\n");
}

int main() {
    int x;
    printf("Введите количество уровней ёлочки: ");
    scanf("%d", &x);
    print_tree(x);
    return 0;
}
