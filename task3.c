#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int count = 0;
    scanf("%d", &n);
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        if (n % 10 == 3) {
            sum += n;
            count++;
        }
    }
    if (count == 0) {
        printf("0.0\n");
    } else {
        float result = (float) sum / count;
        printf("%.1f\n", result);
    }
    return 0;
}
