

#include <stdio.h>
#include <stdlib.h>

#define STR1 "Today we are"
#define STR2 "learning how to "
#define STR3 "\"Program on C++\""
#define STR4 "Lviv, Naukova"

int main(void) {
    // Виведення оригінальних рядків
    printf("|%s|\n", STR1);
    printf("|%70.12s|\n", STR2);
    printf("|%70.24s|\n\n", STR3);

    printf("|%20.5s|\n", STR1);
    printf("|%20.8s|\n", STR2);
    printf("|%-20.9s|\n", STR3);

    // Додавання нового рядка STR4 і його виведення
    printf("|%s|\n", STR4); // Виведення повністю з межами на початку та в кінці
    printf("|%-20.4s|\n", STR4); // Виведення тільки першого слова спочатку рядка
    printf("|%20.4s|\n", STR4); // Виведення першого слова в кінці рядка

    system("pause");
    return 0;
}
