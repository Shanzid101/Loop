#include <stdio.h>

int main() {
    int N, i;
    float A, ASS, CT, MT, TF, total;
    char grade[3];

    printf("Enter the number of students: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Enter marks for Student %d (Attendance, Assignment, Class Test, Midterm, Final):\n", i);
        scanf("%f %f %f %f %f", &A, &ASS, &CT, &MT, &TF);

        
        total = A + ASS + CT + (MT * 0.30) + (TF * 0.40);

        
        if (total >= 90 && total <= 100) {
            sprintf(grade, "A");
        } else if (total >= 86 && total <= 89) {
            sprintf(grade, "A-");
        } else if (total >= 82 && total <= 85) {
            sprintf(grade, "B+");
        } else if (total >= 78 && total <= 81) {
            sprintf(grade, "B");
        } else if (total >= 74 && total <= 77) {
            sprintf(grade, "B-");
        } else if (total >= 70 && total <= 73) {
            sprintf(grade, "C+");
        } else if (total >= 66 && total <= 69) {
            sprintf(grade, "C");
        } else if (total >= 62 && total <= 65) {
            sprintf(grade, "C-");
        } else if (total >= 58 && total <= 61) {
            sprintf(grade, "D+");
        } else if (total >= 55 && total <= 57) {
            sprintf(grade, "D");
        } else if (total < 55) {
            sprintf(grade, "F");
        } else {
            printf("Invalid marks!\n");
            continue; 
        }

        
        printf("Student %d : %s\n", i, grade);
    }

    return 0;
}
