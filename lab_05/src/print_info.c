#include "../inc/print_info.h"


void print_menu(void)
{
    system("setterm -foreground green");

    printf("\n\n\nМеню\n \
        \nМассив \
        \n1. Добавить элемент \
        \n2. Удалить элемент \
        \n3. Распечатать очередь \
        \nСписок \
        \n4. Добавить элемент \
        \n5. Удалить элемент \
        \n6. Распечатать очередь \
        \n7. Распечатать распечатать массив освободившихся адрессов \
        \n\n\nВыполнить задание\
        \n8. Для массива\
        \n9. Для списка \
        \n\n10. Замеры времени и памяти \
        \n\n0. Выход из программы");

    printf("\n\nВведите пункт меню: ");
    system("setterm -foreground yellow");
}