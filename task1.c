#include <stdio.h>

int isPalindrom(int num) {
    int initial = num;
    int inverse = 0;
    while (num != 0) {
        inverse = inverse * 10 + num % 10;
        num /= 10;
    }
    if (initial == inverse) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    int res = isPalindrom(num);
    if (res == 1) {
        printf("\n");
    } else {
        printf("\n");
    }
    return 0;
}
