#include <stdio.h>
#include <math.h>

int mod(long long int a, long long int b)
{
    long long int c = a - b * (a / b);
    return c;
}

long long int vial_sort(long long int number) {
    long long int temp = number;
    int count = 0;
    int multiplier;
    // Проверка отрицательности числа
    if(number >= 0) {
        multiplier = 1;
    } else {
        temp = temp * (-1);
        multiplier = -1;
    }
    // Подсчёт количества цифр числа
    while(temp > 0) {
        count += 1;
        temp /= 10;
    }
    // Заполнение массива цифрами числа
    long long int mass_number[count];
    temp = number * multiplier;
    for(int w = count; w >= 0; w--) {
        mass_number[w - 1] = mod(temp, 10);
        temp /= 10; 
    }
    // Пузырьковая сортировка массива
    for(int i = 0; i < count; i++) {
        for(int j = i + 1; j < count; j++) {
            if(mass_number[i] < mass_number[j]) {
                temp = mass_number[i];
                mass_number[i] = mass_number[j];
                mass_number[j] = temp;
            }
        }
    }
    // Создание числа из элементов изменённого массива
    temp = 0;
    for(int d = 0; d < count; d++) {
        temp += mass_number[d] * pow(10, count - d - 1);
    }
    if(multiplier == -1) {
        return temp * -1;
    } else {
        return temp;
    }
}

int main(void) {
    long long int number;
    scanf("%lli", &number);
    printf("%lli", vial_sort(number));
}