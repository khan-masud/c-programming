#include <stdio.h>

struct students {
    char name[20];
    int roll;
    char department[20];
    int cgpa;
};

int main() {
    int total;
    printf("Enter Total Number Of Students: ");
    scanf("%d", &total);
    getchar(); // Consume newline character

    struct students s[total]; // Array of structures

    for (int i = 0; i < total; i++) {
        printf("Enter Student %d Information:\n", i + 1);
        printf("Enter Student %d Name: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter Student %d Roll: ", i + 1);
        scanf("%d", &s[i].roll);
        getchar(); // Consume newline character
        printf("Enter Student %d Department: ", i + 1);
        fgets(s[i].department, sizeof(s[i].department), stdin);
        printf("Enter Student %d CGPA: ", i + 1);
        scanf("%d", &s[i].cgpa);
        getchar(); // Consume newline character
    }

    for (int i = 0; i < total; i++) {
        printf("\n\nStudent Data %d:\n", i + 1);
        printf("Name: %s", s[i].name);
        printf("Roll: %d\n", s[i].roll);
        printf("Department: %s", s[i].department);
        printf("CGPA: %d\n", s[i].cgpa);
    }

    return 0;
}
