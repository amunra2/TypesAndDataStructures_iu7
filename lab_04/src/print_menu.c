#include"../inc/print_menu.h"


void flush_input(void)
{
    char c;
    while((scanf("%c", &c) == 1) && (c != '\n'))
        ;
}


void print_menu(void)
{
    system("setterm -foreground green");

    puts("\n    Меню программы \
        \n_______________________________________________________\
        \nСтек в виде списка:\n \
        1.  Записать выражение в стек\n \
        2.  Добавить элемент в стек\n \
        3.  Удалить элемент из стека\n \
        4.  Вывести текущее состояние стека\n \
        5.  Произвести вычисление и вывести результат на экран\n \
        6.  Распечатать массив освободившихся адрессов\n \
        \nСтек в виде массива:\n \
        7.  Записать выражение в стек\n \
        8.  Добавить элемент в стек\n \
        9.  Удалить элемент из стека\n \
        10. Вывести текущее состояние стека\n \
        11. Произвести вычисление и вывести результат на экран\n \
        \n12. Вывести замеры времени и памяти \
        \n\n0.  Выйти из программы \
        \n_______________________________________________________\n");

        system("setterm -foreground yellow");
        printf("Введите пункт меню: ");
}