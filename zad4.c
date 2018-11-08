/*Program prosi o podanie dwch liczb cakowitych: liczba1 i liczba2.
Jeeli liczba1<=liczba2
   Program wypisuje liczby parzyste z przedziau <liczba1,liczba2>
Jeeli liczba1>liczba2
   Program wypisuje liczby parzyste z przedziau <liczba2,liczba1>*/


#include <stdio.h>
int main()
{
    int liczba1,liczba2,i;
    printf("Podaj liczba 1: ");
    scanf("%i",&liczba1);
    printf("Podaj liczba 2: ");
    scanf("%i",&liczba2);
    if (liczba1<=liczba2)
    {
        for (i=liczba1;i<=liczba2;i++)
            if(i%2==0)printf("%3i",i);
    }
    else
    {
        for (i=liczba2;i<=liczba1;i++)
            if(i%2==0)printf("%3i",i);
    }
    getchar();
    return 0;
}
