#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int evenCount = 0;
    int oddCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;

    for(int i = 0; i < n; i++) {
        int X;
        scanf("%d", &X);  

        if(X % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        if(X > 0) {
            positiveCount++;
        } else if(X < 0) {
            negativeCount++;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);

    return 0;
}
