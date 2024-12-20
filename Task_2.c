#include <stdio.h>
#include <stdlib.h>

struct microcontroller {
    char name[50];
    float clock_speed;
    int flash_memory;
    int ram_memory;
    int cores;
};

int main() {
    struct microcontroller *stm32f407vg = (struct microcontroller *)malloc(sizeof(struct microcontroller));

    if (stm32f407vg == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Инициализация данных
    strcpy(stm32f407vg->name, "STM32F407VG");
    stm32f407vg->clock_speed = 168.0;  // Тактовая частота в МГц
    stm32f407vg->flash_memory = 1024;  // Размер флеш-памяти в КБ
    stm32f407vg->ram_memory = 192;    // Оперативная память в КБ
    stm32f407vg->cores = 1;            // Количество ядер

    printf("Microcontroller: %s\n", stm32f407vg->name);
    printf("Clock Speed: %.2f MHz\n", stm32f407vg->clock_speed);
    printf("Flash Memory: %d KB\n", stm32f407vg->flash_memory);
    printf("RAM Memory: %d KB\n", stm32f407vg->ram_memory);
    printf("Cores: %d\n", stm32f407vg->cores);

    // Изменение данных
    stm32f407vg->clock_speed = 180.0;
    stm32f407vg->flash_memory = 2048;
    stm32f407vg->ram_memory = 256;
    stm32f407vg->cores = 2;

    printf("\nModified Data:\n");
    printf("Microcontroller: %s\n", stm32f407vg->name);
    printf("Clock Speed: %.2f MHz\n", stm32f407vg->clock_speed);
    printf("Flash Memory: %d KB\n", stm32f407vg->flash_memory);
    printf("RAM Memory: %d KB\n", stm32f407vg->ram_memory);
    printf("Cores: %d\n", stm32f407vg->cores);

    free(stm32f407vg);  // Освобождаем память
    return 0;
}