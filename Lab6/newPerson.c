#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* name;
    int age;
    double height;
} Person_t;


Person_t* newPerson(const char* name, int age, double height)
{
    //Create a person pointer for 1 person, and the size of said person.
    Person_t* ptr = calloc(1, sizeof(Person_t));

    //Remember the NULL OPERATOR at the end of the strings.
    ptr->name = calloc(strlen(name) + 1, sizeof(char));
    strncpy(ptr->name, name, strlen(name) + 1);

    //Set the field values of person ptr.
    ptr->age = age;
    ptr->height = height;

    return ptr;
}


void freePerson(Person_t* person)
{
    //FREE THE NAME MEMORY FIRST!!
    free(person->name);
    free(person);
}


int main(void)
{
    Person_t* employee = newPerson("Billy", 30, 1.68);
    printf("%s is age %d and is %.2f m tall\n", employee->name, employee->age, employee->height);
    freePerson(employee);
}