#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
int rand_passwd;
int count;
int total;

srand(time(0));
for (count = 0, total = 2772; total > 122; count++)
{
rand_passwd = (rand() % 125) + 1;
printf("%c", rand_passwd);
total -= rand_passwd;
}
printf("%c", total);

return (0);
}
