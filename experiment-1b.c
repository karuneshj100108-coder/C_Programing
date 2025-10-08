/*Name : Karunesh Jadha
 Age :18
 Class: Civil
 Division:B
 UIN :251C019*/
#include <stdio.h>

int main() {
    int p, c, m;
    printf("Enter Physics, Chemistry and Maths marks (space separated): ");
    if (scanf("%d %d %d", &p, &c, &m) != 3) return 0;

    float avg = (p + c + m) / 3.0f;

    /* Change the criterion below if needed (currently: average >= 50) */
    const char *elig = (avg >= 50.0f) ? "Eligible for admission" : "Not eligible for admission";

    printf("Average = %.2f\n%s\n", avg, elig);
    return 0;
}
