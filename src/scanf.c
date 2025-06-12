#include<stdio.h>
#include"hotel.h"
int scan(void)
{   
    int user_number;

    while(((scanf("%d",&user_number))!=1)||((user_number<1)||(user_number>5)))
    {
        printf("Вы ввели не корректные значения :\n");
        printf("Введите номер отеля (число):\n");
        while(getchar()!='\n');
    }
    return user_number;
}