#include<stdio.h>
#include"hotel.h"
#include"scanf.c"

int menu(void)
{
    printf("\n\a%s%s\n\a",STAR,STAR);
    printf("Введите номер отеля (число):\n");
    printf("1.Fairfield Arms       2.Hotel Olympic\n");
    printf("3.Chertworthy Plaza    4.The Stockton\n");
    printf("5.Выход");
    printf("\n%s%s\n",STAR,STAR);
    return scan();

}
int scan_day(void)
{
    int user_day;
    printf("На сколько дней вы планируете остановиться? ");
    while(scanf("%d",&user_day)==1)
    return user_day;
    printf("Вы ввели не корректное значение \n");
    return 0;
}