#include <stdio.h>

float calculate_trip_cost(int demand_level, float distance_km, float duration_min) {
    // Стоимость подачи
    float base_fare = demand_level * 10.0;
    // Стоимость за километр
    float cost_per_km = 15.0 * distance_km;
    // Стоимость за минуту
    float cost_per_min = 5.0 * duration_min;
    // Комиссия
    float commission = 29.0 + (demand_level - 1) * (69.0 - 29.0) / 99.0;

    // Итоговая стоимость
    return base_fare + cost_per_km + cost_per_min + commission;
}

int main() {
    int demand_level;
    float distance_km, duration_min;

    printf("Введите уровень спроса (1-100): ");
    scanf("%d", &demand_level);
    printf("Введите длину маршрута (в км): ");
    scanf("%f", &distance_km);
    printf("Введите длительность маршрута (в мин): ");
    scanf("%f", &duration_min);

    float total_cost = calculate_trip_cost(demand_level, distance_km, duration_min);
    printf("Стоимость поездки: %.2f рублей\n", total_cost);

    return 0;
}
