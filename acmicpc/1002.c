// 원의 접점을 이용한 문제.

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, x1, y1, r1, x2, y2, r2;
    double distance, sub;

    scanf("%d", &t);

    for (t, t > 0; t--;) {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        sub = fabs(r1 - r2);
        if (distance == 0 && r1 == r2) {
            printf("-1\n");
        } else if (distance == sub || distance == r1 + r2) {
            printf("1\n");
        } else if (distance > sub && distance < r1 + r2) {
            printf("2\n");
        } else {
            printf("0\n");
        }
    }

    return 0;    
}