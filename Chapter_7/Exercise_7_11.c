/*
 *************************************************
 *  Stephen Prata The C Programming Language    **
 *      Lectures and Exercises 6th ed.          **
 *                                              **
 *  Programming Exercises 7.11                  **
 * ***********************************************
 */
#include <stdio.h>
#define PRICE_ARTICHOKE 2.05
#define PRICE_BEET 1.15
#define PRICE_CARROT 1.09
#define DISCOUNT 5
#define PRICE_DELIVERY1 6.5
#define PRICE_DELIVERY2 14.0
#define PRICE_DELIVERY_INCREASE 0.5
#define CURRENCY '$'

double Delivery(int Funt_i);

int main()
{
    double Delivery_price_d;
    double Cost_artichoke_d, Cost_beet_d, Cost_carrot_d;
    double Total_order_value_d, Discount_d, Total_amount_d;
    int Weight_artichoke_i = 0, Weight_beet_i = 0, Weight_carrot_i = 0, Buff_i = 0;
    int Condition_i = 1; // Для выхода из while
    char In_c;

    system("chcp 1251>0"); // windows encoding
    printf("Какой товар у вас?\n");
    printf("a) Artichoke\nb) Beet\nc) Carrot\nq) Выход\n\n");
    while ((scanf("%c", &In_c) == 1) && (Condition_i == 1))
    {
        switch(In_c)
        {
            case 'a' :
                printf("Укажите вес артишоков\n");
                scanf("%d", &Buff_i);
                Weight_artichoke_i += Buff_i;
                break;
            case 'b' :
                printf("Укажите вес свёклы\n");
                scanf("%d", &Buff_i);
                Weight_beet_i += Buff_i;
                break;
            case 'c' :
                printf("Укажите вес моркови\n");
                scanf("%d", &Buff_i);
                Weight_carrot_i += Buff_i;
                break;
            default :
                Condition_i = 0;
                break;
        }
        if (Condition_i == 1)
        {
            printf("Отлично\n");
            printf("Какой товар у вас?\n");
            printf("a) Artichoke\nb) Beet\nc) Carrot\nq) Выход\n\n");
        }
    }
    Delivery_price_d = Delivery((Weight_artichoke_i + Weight_beet_i + Weight_carrot_i));
    Cost_artichoke_d = Weight_artichoke_i * PRICE_ARTICHOKE;
    Cost_beet_d = Weight_beet_i * PRICE_BEET;
    Cost_carrot_d = Weight_carrot_i * PRICE_CARROT;
    Total_order_value_d = Cost_artichoke_d + Cost_beet_d + Cost_carrot_d;
    if (Total_order_value_d >= 100.0)
        Discount_d = Total_order_value_d * (double) DISCOUNT / 100.0;
    Total_amount_d = Total_order_value_d + Delivery_price_d - Discount_d;

    printf("1 фунт артишоков    = %7.2lf%c\n", PRICE_ARTICHOKE, CURRENCY);
    printf("1 фунт свёклы       = %7.2lf%c\n", PRICE_BEET, CURRENCY);
    printf("1 фунт моркови      = %7.2lf%c\n\n", PRICE_CARROT, CURRENCY);
    printf("Вы заказали:\n");
    printf("%d фунтов артишоков, на %.2lf%c\n", Weight_artichoke_i, Cost_artichoke_d, CURRENCY);
    printf("%d фунтов свёклы, на %.2lf%c\n", Weight_beet_i, Cost_beet_d, CURRENCY);
    printf("%d фунтов моркови, на %.2lf%c\n\n", Weight_carrot_i, Cost_carrot_d, CURRENCY);
    if (Total_amount_d >= 100.0)
        printf("Ваша скидка составляет %.2lf(%d%%)\n", Discount_d, DISCOUNT);
    printf("Стоимость доставки составляет %.2lf%c\n", Delivery_price_d, CURRENCY);
    printf("\nИтоговая сумма заказа с учётом всех затрат равна %.2lf%c\n\n", Total_amount_d, CURRENCY);

    return 0;
}

double Delivery(int Funt_i)
{
    double Delivery_price_d = 0.0;

    if (Funt_i <= 5)
        Delivery_price_d = PRICE_DELIVERY1;
    else if (Funt_i <= 20)
        Delivery_price_d = PRICE_DELIVERY2;
    else if (Funt_i > 20)
        Delivery_price_d = PRICE_DELIVERY2 + ((Funt_i - 20) * PRICE_DELIVERY_INCREASE);

    return Delivery_price_d;
}
