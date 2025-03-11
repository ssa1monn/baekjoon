// 수열의 규칙을 이용한 문제.

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        int arr[3] = {0, 1, 1};
        scanf("%d", &n);
        if(n == 0) {
            printf("1 0\n");
        } else if(n == 1) {
            printf("0 1\n");
        } else {
            for(n; n > 1; n--) {
                arr[2] = arr[0] + arr[1];
                arr[0] = arr[1];
                arr[1] = arr[2];
            }
            printf("%d %d\n", arr[0], arr[1]);
        }
    }
    return 0;
}