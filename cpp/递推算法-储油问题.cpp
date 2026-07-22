#include <stdio.h>

int main() {
    const double total_dist = 1000.0;
    const double max_oil = 500.0;
    double pos = total_dist;
    double oil = 0.0;
    int n = 1;

    printf("贮油点位置(公里)  储油量(升)\n");

    while (pos > 0) {
        double segment = max_oil / (2 * n - 1);
        if (pos - segment <= 0) {
            segment = pos;
            oil = segment * (2 * n - 1);
            pos = 0;
        } else {
            pos -= segment;
            oil = n * max_oil;
        }
        printf("%12.2f%15.2f\n", pos, oil);
        n++;
    }

    return 0;
}
