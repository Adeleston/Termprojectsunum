#include <stdio.h>
#include <conio.h>
void Soru1()//Sonucu etkilemeyen ilk soru
{
    char e;
    printf("Hello.This is Personality Test about Ww2.\n");
    printf("Do you like history(Yes=Y;No=N)(Please press Enter for continue.)\n");
    scanf("%c", &e);
    if (e == 'Y' || e == 'y')
    {
        printf("Oww Nice.Enjoy with our test.(Press Enter after your answers)\n");
    }
    if (e == 'N' || e == 'n')
    {
        printf("Ok no problem.This is not history test.This is only Personality test.\n");
    }
}
void Soru2()//Sonucu etkilemeyen ikinci soru
{
    int e;
    printf("What is meaning history to you ?\n1.Free Time activity\n2.No Thing\n3.Stories about past. \n4.Experince from the Past for Future.\n");
    scanf("%d", &e);
    switch (e)
    {
    case 1:
        printf("Nice hobby.");
        break;
    case 2:
        printf("Ok.");
        break;
    case 3:
        printf("maybe it was only story but that story have a lot of tools,ideas\nDictatories,deaths.");
        break;
    case 4:
        printf("Experince will be with you,Nice person.");
        break;
    default:
        printf("You can\'t fool this test but Test allow it for one time");
    
    }
}
