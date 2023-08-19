#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of floats: ");
    scanf("%d", &n);
    float arr[n];
    float sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        printf("Input float number %d :\n", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }
    printf("The sum is %f\n", sum);
    return 0;
}
