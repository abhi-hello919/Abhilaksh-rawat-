#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

typedef struct {
    char name[50];
    int sap_id;
    float marks;
} Student;

int main() {
    Student students[MAX_STUDENTS];

    printf("--- Student Data Entry ---\n");
    
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("\n| Entering details for Student %d of %d |\n", i + 1, MAX_STUDENTS);

        printf("Enter Name (max 49 chars): ");
        if (scanf(" %49[^\n]", students[i].name) != 1) {
            printf("Error reading name. Exiting.\n");
            return 1;
        }

        printf("Enter SAP ID (integer): ");
        if (scanf("%d", &students[i].sap_id) != 1) {
            printf("Error reading SAP ID. Exiting.\n");
            return 1;
        }

        printf("Enter Marks (float): ");
        if (scanf("%f", &students[i].marks) != 1) {
            printf("Error reading marks. Exiting.\n");
            return 1;
        }
    }

    printf("\n======================================================\n");
    printf("             --- Displaying All Student Details ---\n");
    printf("======================================================\n");
    
    printf("%-5s | %-10s | %-30s | %-5s\n", "No.", "SAP ID", "Name", "Marks");
    printf("------------------------------------------------------\n");

    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("%-5d | %-10d | %-30s | %-5.2f\n", 
               i + 1, 
               students[i].sap_id, 
               students[i].name, 
               students[i].marks);
    }
    
    printf("======================================================\n");

    return 0;
}
