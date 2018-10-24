#include <stdio.h>
double multiply_by_two (double input) {
  double twice = input * 2.0;
  return twice;
}
int main (int argc, char *argv[]) {
    int age = 30;
    double salary = 12345.67;
    double myList[3] = {1.2, 2.3, 3.4};
    double dsalary = multiply_by_two(salary);
    printf("double your salary is %.3f\n", dsalary);
    return 0;
}