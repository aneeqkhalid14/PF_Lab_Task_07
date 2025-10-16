#include <stdio.h>

int main() {
    int students, count = 0, marks, num = 0;
    printf("Enter the number of students in the class: ");
    scanf("%d", &students);

    int passed[students];
    int failed[students];
    for (int i = 0; i < students; i++) {
        passed[i] = 0;
        failed[i] = 0;
    }
    int pass_count = 0, fail_count = 0;

    while ((count < students) && (num != -1)) {
        printf("Enter the marks of the student (or -1 to stop): ");
        scanf("%d", &marks);

        if (marks == -1) {
            num = -1;
            break; // stop input early
        }

        if (marks >= 5 && marks <= 10) {
            passed[pass_count] = marks;
            pass_count++;
            count++;
        } else if (marks >= 0 && marks < 5) {
            failed[fail_count] = marks;
            fail_count++;
            count++;
        } else {
            printf("Invalid marks. Please enter between 0 and 10.\n");
        }
    }

    int total_pass = 0, total_fail = 0;

    printf("Passing marks array:\n");
    for (int i = 0; i < pass_count; i++) {
        printf("%d\n", passed[i]);
        total_pass += passed[i];
    }

    printf("Failed marks array:\n");
    for (int i = 0; i < fail_count; i++) {
        printf("%d\n", failed[i]);
        total_fail += failed[i];
    }

    if (pass_count > 0) {
        int pass_avg = total_pass / pass_count;
        printf("The average of passing marks is %d\n", pass_avg);
    } else {
        printf("No passing marks entered.\n");
    }

    if (fail_count > 0) {
        int fail_avg = total_fail / fail_count;
        printf("The average of failed marks is %d\n", fail_avg);
    } else {
        printf("No failed marks entered.\n");
    }
}

