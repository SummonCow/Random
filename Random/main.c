#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int x, a ,c,m = 1048576 ,i;

int main()
{

   time_t now;
    struct tm *tm;

    now = time(0);
    if ((tm = localtime (&now)) == NULL) {
        printf ("Error extracting time stuff\n");
        return 1;
    }
    c = tm->tm_sec * tm->tm_min*569;
    printf ("sec=%02d\n", tm->tm_sec);
    x = (c+1) % tm->tm_sec;
    a = (c*x*7) % tm->tm_hour;






         for (i=1;i<=100;i++)
   {
       x=(( a * x + c) % m);
        printf("%d\t", x);

   }
    return 0;
}
