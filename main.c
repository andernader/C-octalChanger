/////////////////////////////////////////////
//About:                                   //
//This program converts a number to the    //
//base of 10 into base of 8.               //
//The conversion is only as a number shown //
//not as a function changing the number in //
//c also.                                  //
//                                         //
//Author: Ammar MULLAOGLU                  //
//Date  : 18.10.2026                       //
/////////////////////////////////////////////


#include <stdio.h>

int main(void){
    int user_number, new_octal = 0, place = 1;
    printf("Enter the number of base 10 that you want to change: ");
    scanf("%d", &user_number);

    while(user_number != 0){
        new_octal += ((user_number % 8) * place);
        user_number /= 8;
        place *= 10;
    }

    printf("The new octal number is: %05d\n", new_octal);
    return 0;
}
