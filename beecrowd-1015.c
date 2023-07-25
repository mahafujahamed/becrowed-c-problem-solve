#include <stdio.h>
int main() {
    double x1, y1, x2, y2, Formula;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    Formula=sqrt (pow(x2-x1,2)+pow(y2-y1,2));
    printf("%0.4lf\n", Formula);
    return 0;
}
