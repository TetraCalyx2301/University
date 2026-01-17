#include<stdio.h>
//定义返回0不是素数，反之则否
int isprimenumber(int a) {
    if (a <= 1)
    {
        return 0;
    }
    for (int i = 2; i < a; i++) {
        if (a % i == 0)
        {
            return 0;
        }

    }
    return 1;
}
int main() {
    int number;
    printf("Please enter a number: ");
    scanf_s("%d", &number);
    int rec = isprimenumber(number);
    if (rec == 0) {
        printf("%d is not a prime number", number);
    }
    else {
        printf("%d is a prime number,\n", number);
    }return 0;
}