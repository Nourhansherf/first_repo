#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LENGTH 50

typedef struct
{
    char name[MAX_NAME_LENGTH];
    float score;
} Student;

// Function prototypes
void getStudentData(Student students[], int *numStudents);
float calculateAverage(const Student students[], int numStudents);
void findBelowAverage(const Student students[], int numStudents, float averageScore);
void findHighestScore(const Student students[], int numStudents, float *highestScore, char topStudents[][MAX_NAME_LENGTH], int *numTopStudents);
void sortStudentsByScore(Student students[], int numStudents);

int main()
{
    Student students[MAX_STUDENTS];
    int numStudents = 0;
    float averageScore, highestScore;
    char topStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numTopStudents = 0;

    // Get student data
    getStudentData(students, &numStudents);

    if (numStudents == 0)
    {
        printf("No student data entered. Exiting program.\n");
        return 0;
    }

    // Calculate average score
    averageScore = calculateAverage(students, numStudents);
    printf("\nAverage Score: %.2f\n", averageScore);

    // Find and warn students below average
    printf("\nStudents with below average scores:\n");
    findBelowAverage(students, numStudents, averageScore);

    // Find the highest score and the top student(s)
    findHighestScore(students, numStudents, &highestScore, topStudents, &numTopStudents);
    printf("\nHighest Test Score: %.2f\n", highestScore);
    printf("Top Student(s):\n");
    for (int i = 0; i < numTopStudents; i++)
    {
        printf("%s - Congratulations on the highest score!\n", topStudents[i]);
    }

    // Sort students by score
    sortStudentsByScore(students, numStudents);
    printf("\nStudents sorted by scores (highest to lowest):\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("%s: %.2f\n", students[i].name, students[i].score);
    }

    return 0;
}

void getStudentData(Student students[], int *numStudents)
{
    char name[MAX_NAME_LENGTH];
    float score;

    while (*numStudents < MAX_STUDENTS)
    {
        printf("Enter student name (or 'done' to finish): ");
        scanf("%s", name);
        if (strcmp(name, "done") == 0)
        {
            break;
        }
        printf("Enter test score for %s: ", name);
        if (scanf("%f", &score) != 1)
        {
            printf("Invalid input. Please enter a numeric value for the score.\n");
            // Clear the input buffer
            while (getchar() != '\n')
                ;
            continue;
        }
        strcpy(students[*numStudents].name, name);
        students[*numStudents].score = score;
        (*numStudents)++;
    }
}

float calculateAverage(const Student students[], int numStudents)
{
    float sum = 0.0;
    for (int i = 0; i < numStudents; i++)
    {
        sum += students[i].score;
    }
    return sum / numStudents;
}

void findBelowAverage(const Student students[], int numStudents, float averageScore)
{
    int belowAverageFound = 0;
    for (int i = 0; i < numStudents; i++)
    {
        if (students[i].score < averageScore)
        {
            printf("%s - Warning: Below average score!\n", students[i].name);
            belowAverageFound = 1;
        }
    }
    if (!belowAverageFound)
    {
        printf("No students with below average scores.\n");
    }
}

void findHighestScore(const Student students[], int numStudents, float *highestScore, char topStudents[][MAX_NAME_LENGTH], int *numTopStudents)
{
    *highestScore = students[0].score;
    strcpy(topStudents[0], students[0].name);
    *numTopStudents = 1;

    for (int i = 1; i < numStudents; i++)
    {
        if (students[i].score > *highestScore)
        {
            *highestScore = students[i].score;
            strcpy(topStudents[0], students[i].name);
            *numTopStudents = 1;
        }
        else if (students[i].score == *highestScore)
        {
            strcpy(topStudents[*numTopStudents], students[i].name);
            (*numTopStudents)++;
        }
    }
}

void sortStudentsByScore(Student students[], int numStudents)
{
    Student temp;
    for (int i = 0; i < numStudents - 1; i++)
    {
        for (int j = i + 1; j < numStudents; j++)
        {
            if (students[i].score < students[j].score)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}
