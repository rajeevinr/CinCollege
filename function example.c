#include<stdio.h>
#include<math.h>
void american();
void chinese();
void japanese();
int main()
{
    printf("im in main\n");
    chinese();
    japanese();
    american();

    return 0;
}
void japanese()
{
    printf("im japanese\n");
}
void chinese(){
    printf("im chinese\n");
}
void american(){
    printf("im american\n");
}
