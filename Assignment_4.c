//question 4 grade of student 

#include <stdio.h>

int main() {
    int subject_marks[5];
    int total_marks = 0;

    // Input marks for each subject
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for Subject %d: ", i + 1);
        scanf("%d", &subject_marks[i]);

        // Validate input marks (assuming marks are in the range 0 to 100)
        while (subject_marks[i] < 0 || subject_marks[i] > 100) {
            printf("Marks should be in the range 0 to 100. Enter again: ");
            scanf("%d", &subject_marks[i]);
        }

        // Calculate total marks
        total_marks += subject_marks[i];
    }

    // Determine grade based on total marks
    if (total_marks >= 90) {
        printf("Grade: Ex\n");
    } else if (total_marks >= 80) {
        printf("Grade: A\n");
    } else if (total_marks >= 70) {
        printf("Grade: B\n");
    } else if (total_marks >= 60) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}





































