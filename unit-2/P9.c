#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;


void insert() {
    int item;

    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter element to insert: ");
    scanf("%d", &item);

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = item;

    printf("%d inserted into the queue.\n", item);
}


void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d deleted from the queue.\n", queue[front]);
    front++;

    if (front > rear) {
        front = rear = -1;
    }
}

// Display queue elements
void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements are: ");
    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Queue Operations ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Program exited.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
