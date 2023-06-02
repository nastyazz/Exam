#include <stdio.h>

float sumFoo(int n) {
    float sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / (i *(i+1));
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    float result = sumFoo(n);
    printf("%.2f\n", result);
    return 0;
}