#include <stdio.h>

int main() 
{
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