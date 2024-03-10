int integerNumber = 10;
char charValue = (char)integerNumber;
float floatValue = (float)integerNumber;

int result = 5 + 3 * 2;

#include <stdio.h>

struct Student {
    int studentID;
    float marks;
};

void sortArray(struct Student arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].studentID > arr[j + 1].studentID) {

                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {

    struct Student students[] = {{103, 87.5}, {101, 92.0}, {105, 78.5}, {102, 95.5}, {104, 88.0}};
    int size = sizeof(students) / sizeof(students[0]);

    sortArray(students, size);

    printf("Sorted Array based on Student ID:\n");
    for (int i = 0; i < size; i++) {
        printf("Student ID: %d, Marks: %.2f\n", students[i].studentID, students[i].marks);
    }

    return 0;
}
