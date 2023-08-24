#include "linkedlist.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


LinkedListElement_t* findElement(LinkedList_t* list, char data)
{

    LinkedListElement_t* current = list->head;
    
    
    while (current->data != data) {
        if (current->next) {
            current = current->next;
        } else {
            return NULL;
        }
    }

    return current;
}


void addElement(LinkedList_t* list, char data)
{
    //allocate memory first.
    LinkedListElement_t* ptr = calloc(1, sizeof(LinkedListElement_t));

    ptr->data = data;
    ptr->next = NULL;
    
    if (list->tail == NULL) {
        list->head = ptr;
        list->tail = ptr;
    } else {
        //Sets the current tail.next to the next segment, then sets the new tail.
        list->tail->next = ptr;
        list->tail = ptr;
    }
}


int main(void)
{
LinkedList_t alist = {.head = NULL, .tail = NULL};
LinkedListElement_t* element;
addElement(&alist, 'a');
addElement(&alist, 'b');
addElement(&alist, 'c');
element = findElement(&alist, 'b');
printf("Found element: %c\n", element->data);
}