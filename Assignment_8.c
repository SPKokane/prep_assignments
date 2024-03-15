// question 8 student data

#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];
    float totalMarks;
};

void displayData(struct Student student) {
    printf("Student Name: %s\n", student.studentName);
    printf("Roll Number: %s\n", student.rollNo);
    printf("Total Marks: %.2f\n", student.totalMarks);
}

int main() {
    struct Student student;

    printf("Enter student's name: ");
    scanf("%s", student.studentName);

    printf("Enter student's roll number: ");
    scanf("%s", student.rollNo);

    printf("Enter student's total marks: ");
    scanf("%f", &student.totalMarks);

    printf("\nDisplaying data as read:\n");
    displayData(student);

    return 0;
}


































