#include "linkedlist.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void deleteElement(LinkedList_t* list, LinkedListElement_t* element)
{
    //Check first if we have valid inputs.
    if (!list || !element) {
        return;
    }


    LinkedListElement_t* current = list->head;
    LinkedListElement_t* previous = NULL;

    //Start the loop while current is not null.
    while (current) {
        if (current == element) {
            //If we have a previous, set it to the next (if we can)
            if (previous) {
                previous->next = current->next;
                //We reached the end, and want to delete the element.
                if (current == list->tail) {
                    list->tail = previous;
                }

            } else {
                //If we don't have a previous, it means we are at the head (or only one)
                list->head = current->next;
                if (!current->next) {
                    list->tail = NULL;
                }
            }
            free(current);
            return;
        } else {
            previous = current;
            current = current->next;
        }
    }

    //Since the loop started in the first place, free the element when it's not found.
    free(element);
}


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
deleteElement(&alist, element);
for (LinkedListElement_t* elem=alist.head; elem != NULL; elem = elem->next) {
    printf("%c", elem->data);
}
//Clean up
while (alist.head != NULL) {
    deleteElement(&alist, alist.head);
}
}