#include <stdio.h>
 
#include <stdlib.h>



struct node {
          
        int info;
        
        struct node * next;
};

 
struct node * head = NULL;

 
void push(int rem) {
         
        struct node * new_node = malloc(sizeof(struct node));
        new_node -> info = rem;

      
        new_node -> next = head;
 
        head = new_node;
}

void pop() {
        struct node * temp;
 
        if (head == NULL) {
                printf(" Stack is empty!!");
        } else {
                printf(" Popped binary %i", head -> info);

                temp = head;
                
                head = head -> next;
                free(temp);
        }
}
 
void traverse() {
        struct node * temp;
        temp = head;

        printf("The Binary Equivalence = ");
        while (temp != NULL) {
                printf("%i", temp -> info);
                temp = temp -> next;
        }
        printf("\n");
        return;
}
 
void DecimalToBin(int number) {
        int r;

        while (number != 0) {
                r = number % 2;
                number = number / 2;
                push(r);
        }
}

int main() {

        int n;

        printf("\nEnter Any Decimal Number To Convert Into Binary = ");
        scanf("%i", & n);
        printf("\n");
        DecimalToBin(n);
        traverse();

        return 0;
}

