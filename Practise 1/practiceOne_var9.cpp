#include <iostream>
#include <windows.h>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);
    //cout << "Русский язык выводится корректно\n";
    int width = 89;
    string itemName1 = "Папка";
    string itemName2 = "Бумага";
    string itemName3 = "Калькулятор";
    string itemType1 = "К";
    string itemType2 = "К";
    string itemType3 = "О";
    float price1 = 4.75;
    float price2 = 13.90;
    float price3 = 411.00;
    int minCount1 = 4;
    int minCount2 = 10;
    int minCount3 = 1;
    
    string note = "Примечание: К – канцтовары, О - оргтехника";

    char tmpC1[32];
    char tmpC2[32];
    //Папка К 4,75 4
    printf("Введите: Наименование товара 1    Тип товара 1       Цена за 1 шт. (грн) 1      Минимальное кол-во в партии 1\n");
    scanf_s("%s %s %f %u", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &price1, &minCount1);
    itemName1 = tmpC1;
    itemType1 = tmpC2;
    //Бумага К 13,90 10
    printf("Введите: Наименование товара 2    Тип товара 2       Цена/шт. (грн) 2      Минимальное кол-во в партии 2\n");
    scanf_s("%s %s %f %u", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &price2, &minCount2);
    itemName2 = tmpC1;
    itemType2 = tmpC2;
    //Калькулятор О 411,00 1
    printf("Введите: Наименование товара 3    Тип товара 3       Цена/шт. (грн) 3      Минимальное кол-во в партии 3\n");
    scanf_s("%s %s %f %u", tmpC1, sizeof(tmpC1), tmpC2, sizeof(tmpC2), &price3, &minCount3);
    itemName3 = tmpC1;
    itemType3 = tmpC2;

    // верхняя граница таблицы
    printf("\n");
    for (int i = 0; i < width; i++)
        printf("-");
    printf("\n");
    printf("|Прайс-лист                                                                             |\n"); //заголовок
    for (int i = 0; i < width; i++)
        printf("-");
    printf("\n");
    printf("|Наименование товара  |Тип товара |Цена за шт (грн)   |Минимальное количество в партии  |"); // столбцы с информацией
    printf("\n");
    for (int i = 0; i < width; i++)
        printf("-");
    printf("\n");

    //Строка 1
    printf("|%-21s|%-11s|%-19.2f|%-33u|\n", itemName1.c_str(), itemType1.c_str(), price1, minCount1);
    for (int i = 0; i < width; i++)
        printf("-");
    printf("\n");

    //Строка 2
    printf("|%-21s|%-11s|%-19.2f|%-33u|\n", itemName2.c_str(), itemType2.c_str(), price2, minCount2);
    for (int i = 0; i < width; i++)
        printf("-");
    printf("\n");

    //Строка 3
    printf("|%-21s|%-11s|%-19.2f|%-33u|\n", itemName3.c_str(), itemType3.c_str(), price3, minCount3);
    for (int i = 0; i < width; i++)
        printf("-");
    printf("\n");

    //Примечание
    printf("|Примечание: %s", note.c_str());
    for (int i = 0; i < width - 14 - note.size(); i++)
        printf(" ");
    printf("|\n");
    for (int i = 0; i < width; i++)
        printf("-");
    printf("\n");
}


//----------------------------------------------------------------------------------------
//| Прайс - лист                                                                         |
//----------------------------------------------------------------------------------------
// 21                    11            19                33
//| Наименование товара | Тип товара | Цена за шт(грн) | Минимальное количество в партии |
//----------------------------------------------------------------------------------------
//| Папка               | К          | 4, 75           | 4                               |
//----------------------------------------------------------------------------------------
//| Бумага              | К          | 13, 90          | 10                              |
//----------------------------------------------------------------------------------------
//| Калькулятор         | О          | 411, 00         | 1                               |
//----------------------------------------------------------------------------------------
//| Примечание: Примечание: К – канцтовары, О - оргтехника                               |
//----------------------------------------------------------------------------------------