#include "linkedlist.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void addElement(LinkedList_t* list, char data)
{
    //allocate memory first.
    LinkedListElement_t* ptr = calloc(sizeof(data), sizeof(char));

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
    addElement(&alist, 'a');
    printf("The head element data is: %c\nThe tail element data is: %c\n", alist.head->data, alist.tail->data);
}