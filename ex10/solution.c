#include <stdio.h>
#include <string.h>

// Structure from Ex9
typedef struct {
    int id;
    char code[6];
    char title[50];
    int year;
} subject;

// Function from Ex10
subject read_struct() {
    subject s;

    printf("Enter subject id: ");
    scanf("%d", &s.id);

    printf("Enter subject code (max 5 chars): ");
    scanf("%5s", s.code);  // limit to 5 chars

    printf("Enter subject title (max 49 chars): ");
    getchar(); // consume leftover newline
    fgets(s.title, sizeof(s.title), stdin);
    s.title[strcspn(s.title, "\n")] = '\0'; // remove newline if exists

    printf("Enter subject year: ");
    scanf("%d", &s.year);

    return s;
}

// Example main to test
int main() {
    subject mySub = read_struct();

    printf("\nSubject Information:\n");
    printf("ID: %d\n", mySub.id);
    printf("Code: %s\n", mySub.code);
    printf("Title: %s\n", mySub.title);
    printf("Year: %d\n", mySub.year);

    return 0;
}
