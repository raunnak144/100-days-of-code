#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int v) {
    struct Node* n = malloc(sizeof(struct Node));
    n->data = v;
    n->next = NULL;
    return n;
}

void insertEnd(int v) {
    struct Node* n = createNode(v);
    if (head == NULL) {
        head = n;
        return;
    }
    struct Node* t = head;
    while (t->next) t = t->next;
    t->next = n;
}

void deleteEnd() {
    if (head == NULL) return;
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* t = head;
    while (t->next->next) t = t->next;
    free(t->next);
    t->next = NULL;
}

void display() {
    struct Node* t = head;
    while (t) {
        printf("%d -> ", t->data);
        t = t->next;
    }
    printf("NULL\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    display();

    deleteEnd();
    display();

    return 0;
}
