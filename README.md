1. Алгоритм и блок-схема

2. Алгоритм
 1. Начало

 2. Объявить константы:
    DISTANCE = 390 (миль) — расстояние от Лондона до Эдинбурга
    ROLLS_ROYCE_CONSUMPTION = 15 (миль/галлон) — расход Роллс-Ройса
    FORD_ESCORT_CONSUMPTION = 36 (миль/галлон) — расход Форд Эскорт

 3. Ввести исходные данные:
    price_per_gallon — цена 1 галлона бензина в фунтах

 4. Проверить корректность введенных данных:
    ЕСЛИ price_per_gallon ≤ 0 ТО:
    Вывести сообщение об ошибке
    Завершить программу

 5. Вычислить расход бензина для Роллс-Ройса:
    fuel_rolls_royce = DISTANCE / ROLLS_ROYCE_CONSUMPTION

 6. Вычислить стоимость поездки на Роллс-Ройсе:
    cost_rolls_royce = fuel_rolls_royce × price_per_gallon

 7. Вычислить расход бензина для Форд Эскорт:
    fuel_ford_escort = DISTANCE / FORD_ESCORT_CONSUMPTION

 8. Вычислить стоимость поездки на Форд Эскорт:
    cost_ford_escort = fuel_ford_escort × price_per_gallon

 9. Вычислить экономию:
    savings = cost_rolls_royce - cost_ford_escort

 10. Вывести результаты расчетов:
     Вывести заголовок "=== РЕЗУЛЬТАТЫ РАСЧЕТА ==="
     Вывести расстояние и стоимость бензина
     Вывести подробные данные по Роллс-Ройсу:
       расход топлива
       необходимое количество бензина  
       стоимость поездки
     Вывести подробные данные по Форд Эскорт:
       расход топлива
       необходимое количество бензина
       стоимость поездки
     Вывести итоговую экономию

 11. Конец

https://drive.google.com/file/d/1ynoR5RwM4fwzRoEYZ2W1lDPxY9CYbts1/view?usp=sharing

12. Реализация программы

13. #include <stdio.h>

int main() {
    // Объявление переменных
    float price_per_gallon;
    float distance = 390.0;
    float rolls_royce_consumption = 15.0;
    float ford_escort_consumption = 36.0;
    
    float fuel_rolls_royce, fuel_ford_escort;
    float cost_rolls_royce, cost_ford_escort;
    float savings;
    
    // Ввод стоимости бензина
    printf("Введите стоимость 1 галлона бензина (в фунтах): ");
    scanf("%f", &price_per_gallon);
    
    // Проверка на корректность ввода
    if (price_per_gallon <= 0) {
        printf("Ошибка: стоимость бензина должна быть положительным числом.\n");
        return 1;
    }
    
    // Расчет расхода бензина для Роллс-Ройса
    fuel_rolls_royce = distance / rolls_royce_consumption;
    
    // Расчет стоимости поездки на Роллс-Ройсе
    cost_rolls_royce = fuel_rolls_royce * price_per_gallon;
    
    // Расчет расхода бензина для Форд Эскорт
    fuel_ford_escort = distance / ford_escort_consumption;
    
    // Расчет стоимости поездки на Форд Эскорт
    cost_ford_escort = fuel_ford_escort * price_per_gallon;
    
    // Расчет экономии
    savings = cost_rolls_royce - cost_ford_escort;
    
    // Вывод результатов
    printf("\n=== РЕЗУЛЬТАТЫ РАСЧЕТА ===\n");
    printf("Расстояние: %.0f миль\n", distance);
    printf("Стоимость бензина: %.2f фунтов/галлон\n\n", price_per_gallon);
    
    printf("РОЛЛС-РОЙС:\n");
    printf("  Расход: %.1f миль/галлон\n", rolls_royce_consumption);
    printf("  Потребуется бензина: %.2f галлонов\n", fuel_rolls_royce);
    printf("  Стоимость поездки: %.2f фунтов\n\n", cost_rolls_royce);
    
    printf("ФОРД ЭСКОРТ:\n");
    printf("  Расход: %.1f миль/галлон\n", ford_escort_consumption);
    printf("  Потребуется бензина: %.2f галлонов\n", fuel_ford_escort);
    printf("  Стоимость поездки: %.2f фунтов\n\n", cost_ford_escort);
    
    printf("ЭКОНОМИЯ при поездке на Форд Эскорт: %.2f фунтов\n", savings);
    
    return 0;
}

3. Результат работы программы

Введите стоимость 1 галлона бензина (в фунтах): 2

=== РЕЗУЛЬТАТЫ РАСЧЕТА ===
Расстояние: 390 миль
Стоимость бензина: 2.00 фунтов/галлон

РОЛЛС-РОЙС:
  Расход: 15.0 миль/галлон
  Потребуется бензина: 26.00 галлонов
  Стоимость поездки: 52.00 фунтов

ФОРД ЭСКОРТ:
  Расход: 36.0 миль/галлон
  Потребуется бензина: 10.83 галлонов
  Стоимость поездки: 21.67 фунтов

ЭКОНОМИЯ при поездке на Форд Эскорт: 30.33 фунтов

4. Информация о разработчике
Ищенко Иван бИЦ-252
