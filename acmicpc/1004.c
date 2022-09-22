// 두 점 사이의 거리를 이용한 문제.

#include <stdio.h>

int main(void){
    int t, n;
    int enter = 0, depart = 0;
    int x1, y1, x2, y2;
    int cx, cy, cr;

    scanf("%d", &t);

    while(t--) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &n);

        while(n--) {
            scanf("%d %d %d", &cx, &cy, &cr);
            if((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy) < cr * cr) {
                if((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy) > cr * cr) {
                depart++;
                }
            }
            if((x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy) < cr * cr) {
                if((x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy) > cr * cr) {
                enter++;
                }
            }
        }

        printf("%d\n", enter + depart);
        enter = 0;
        depart = 0;
    }

    return 0;
}