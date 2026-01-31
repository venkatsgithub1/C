#include<stdio.h>

typedef struct Address {
    char street[100];
    char city[100];
    char zip[100];
} Address;

typedef struct Student {
    char name[100];
    int id;
    float gpa;
    Address address;
} Student;

void printStudent(Student student);

void printAddress(Address address);

int main(void) {
    Address address = {.street = "MG road", .city = "Bengaluru", .zip = "560087"};
    Student bob = {.name = "bob", .id = 1, .gpa = 4.3, .address = address};
    printStudent(bob);
}

void printStudent(Student student) {
    printf("Student: name=%s, id=%d, gpa=%f\n", student.name, student.id, student.gpa);
    printAddress(student.address);
}

void printAddress(Address address) {
    printf("Address: street=%s, city=%s, zip=%s\n", address.street, address.city, address.zip);
}
