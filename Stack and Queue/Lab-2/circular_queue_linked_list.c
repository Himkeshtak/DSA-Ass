#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main()
{
    int x;
    struct Node *head = NULL, *tail = NULL;

    while (scanf("%d", &x) == 1 && x != -1) {
        struct Node *n = (struct Node*)malloc(sizeof(struct Node));
        if (!n) return 0;
        n->data = x;
        if (!head) {
            head = tail = n;
            n->next = head;
        } else {
            tail->next = n;
            tail = n;
            tail->next = head;
        }
    }

    if (!head) return 0; /* as per assumption, list not empty */

    struct Node *cur = head->next; /* start from second song */
    printf("%d", cur->data);
    while (cur != head) {
        cur = cur->next;
        printf(" %d", cur->data);
    }
    printf("\n");

    return 0;
}
