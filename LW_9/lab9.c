#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int mod(int a, int b)
{
    int c = a - b * (a / b);
    return c;
}

int min(int a, int b, int c)
{
    int mass[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (mass[i] < mass[j])
            {
                int t = mass[i];
                mass[i] = mass[j];
                mass[j] = t;
            }
        }
    }
    return mass[2];
}

int max(int a, int b, int c)
{
    int mass[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (mass[i] < mass[j])
            {
                int t = mass[i];
                mass[i] = mass[j];
                mass[j] = t;
            }
        }
    }
    return mass[0];
}

int main(void)
{
    const int x = 6;
    const int y = 27;
    const int m = -15;
    int i = x;
    int j = y;
    int l = m;
    int k = 0;
    bool success = false;
    while (k < 50)
    {
        if ((pow(i + 10, 2) + pow(j + 10, 2) <= 100) && (pow(i + 20, 2) + pow(j + 20, 2) <= 100))
        {
            printf("Success!\n");
            printf("X coordinate: %d\n", i);
            printf("Y coordinate: %d\n", j);
            printf("Movement parameter: %d\n", l);
            printf("Time: %d\n", k);
            success = true;
            break;
        }
        int ik = i;
        int jk = j;
        int lk = l;
        i = mod(pow(ik, 3) - pow(jk, 3) + pow(lk, 3) - k, 20);
        j = mod(min(ik * jk * jk - k, pow(ik, 2) * lk - k, jk * pow(lk, 2) - k), 30);
        l = mod(max(ik * jk * jk - k, pow(ik, 2) * lk - k, jk * pow(lk, 2) - k), 30);
        k++;
    }
    if (success == false)
    {
        printf("Failure!\n");
        printf("X coordinate: %d\n", i);
        printf("Y coordinate: %d\n", j);
        printf("Movement parameter: %d\n", l);
        printf("Time: %d\n", k);
    }
}