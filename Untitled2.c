#include <stdio.h>
#include <math.h>

int main() {
    int n, num, square_root;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);

        square_root = sqrt(num);

        if (square_root * square_root == num) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
