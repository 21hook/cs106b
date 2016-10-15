#include "stdio.h"

/**
* coding style:
* monthT for enumeration type; Jan for enumeration values
*/
enum monthT { // type
    Jan, // value; {, , , }
    Feb,
    Mar,
    Apr,
    May
};

int main()
{
    monthT month; // declare

    switch(month) {
        case Jan: case Mar:
            return 31; // assignment; break
        case Feb:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 30;

    }


    return 0;
}