#include <cstdio>

int main()
{
    std::printf("Enter a list of number (0 to end): ");
    int sum = 0;
    int num = 0;

    while (true)
    {
        std::scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        sum += num;
    }
    std::printf("sum = %d\n", sum);

}