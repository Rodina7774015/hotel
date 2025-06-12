#include<stdio.h>
#include"hotel.h"
#include"menu.c"
#include"chek.c"
int main(void)
{
    int res_menu;
    int user_hotel=0;
    int user_day=0;
    int user_chek;
    while ((res_menu=menu()) != QUIT)
    {
        switch (res_menu)
        {
            case 1:user_hotel=HOTEL1;
            break;
            case 2:user_hotel=HOTEL2;
            break;
                case 3:user_hotel=HOTEL3;
            break;
                case 4:user_hotel=HOTEL4;
            break;
        }
        user_day=scan_day();
        user_chek=chek(user_day,user_hotel);
        printf("%d\n",user_chek);
    }
   printf("До встречи в следующий раз");
   return 0; 

}