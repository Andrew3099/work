#include <stdio.h>

int ram = 32;     // Глобальная переменная
int latency = -64; // Глобальная переменная

void modificate()
{
    ram = ram - 1;
    latency = latency + 1;
}

int main()
{
    modificate();  // Вызываем функцию
    printf("%d %d\n", ram, latency);  // Выводим глобальные переменные
    return 0;
}