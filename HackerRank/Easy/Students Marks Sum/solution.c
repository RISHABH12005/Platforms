// HackerRank Problem: Students Marks Sum
// Link: https://www.hackerrank.com/challenges/students-marks-sum/problem
// Difficulty: Easy
// Language: c



//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
    int sum = 0;
    if (gender == 'b') {
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else if (gender == 'g') {
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    return sum;
}

