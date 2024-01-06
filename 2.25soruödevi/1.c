/*. Write an algorithm and draw a flowchart that will read the two sides of a 
rectangle and calculate its area and perimeter.*/
#include<stdio.h>
int main()
{
    int kenar1,kenar2,alan,cevre;

    printf("kenarlari giriniz\n");
    gets(kenar1);
    scanf("%d",&kenar2);

    alan=kenar1 * kenar2;
    cevre=2 * (kenar1 + kenar2);
    printf("cevre: %d \nalan :%d",cevre,alan);
    return 0;




}