#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int height;
    struct Node* next;
} Node;

Node* insert(Node* head, int height) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->height = height;
    new_node->next = NULL;

    if (head == NULL || head->height < height) {
        new_node->next = head;
        return new_node;
    }

    Node* current = head;
    while (current->next != NULL && current->next->height >= height) {
        current = current->next;
    }
    new_node->next = current->next;
    current->next = new_node;

    return head;
}

void print_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->height);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Node* head = NULL;
    int height;

    while (1) {
        printf("Введите рост ученика (или -1 для выхода): ");
        scanf("%d", &height);
        if (height == -1) {
            break;
        }
        head = insert(head, height);
        print_list(head);
    }

    // Освобождение памяти
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
