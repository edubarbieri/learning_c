#include <stdio.h>

struct date_stc {
  int day;
  int month;
  int year;
};

typedef struct date_stc date;

void print_date(date* dt);

int main() {
  date today;
  today.day = 3;
  today.month = 4;
  today.year = 2020;

  print_date(&today);

  return 0;
}
void print_date(date* dt){
  //dt->day é uma abreviação de (*dt).day
  printf("Today is %02d/%02d/%04d\n", dt->day, dt->month, (*dt).year);
}