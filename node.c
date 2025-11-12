#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node* head = (Node*)malloc(sizeof(Node));
    head->data = 10;
    head->next = NULL;

    Node* second = (Node*)malloc(sizeof(Node));
    second->data = 20;
    second->next = NULL;
    head->next = second;

    Node* third = (Node*)malloc(sizeof(Node));
    third->data = 30;
    third->next = NULL;
    second->next = third;

    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    temp = head;
    while (temp != NULL) {
        Node* next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}