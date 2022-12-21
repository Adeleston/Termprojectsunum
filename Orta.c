#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
char soru3()
{
    char Road;
    int Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0;
    int D, F, N, C, M;
    while (Q1 != 1 && Q1 != 2 && Q1 != 3 && Q1 != 4)//istenilmeyen cevap gelmesini engeller.
    {
        printf("If you are a country leader.Which situation is better than others ?\n1.Not Free but you and your nation are wealthy\n2.Your opion is not important but your nation is happy.\n3.You are only power center but your nation is unhappy\n4.Your nation\'s today is bad but future is bright.\n");
        scanf("%d", &Q1);
        switch (Q1)//sonucu etkileyen sorunun cevabı burada ilk puan değeri atanır her yola
        {
        case 1:
            D = 20;
            F = 10;
            N = 0;
            C = 10;
            M = 0;
            break;
        case 2:
            D = 10;
            F = 10;
            N = 10;
            C = 0;
            M = 0;
            break;
        case 3:
            D = -40;
            F = 20;
            N = -40;
            C = 20;
            M = 25;
            break;
        case 4:
            D = 10;
            F = 0;
            N = 20;
            C = 10;
            M = 3;
            break;
        default:
            printf("Wrong Answer.This is not option.");
            break;
        }
    }
    getch();
    system("cls");
    while (Q2 != 1 && Q2 != 2 && Q2 != 3)//istenilmeyen cevap gelmesini engeller.
    {
        printf("Which is better than others ?\n1.Freedom\n2.Power\n3.Equality\n");
        scanf("%d", &Q2);
        switch (Q2)//Burada ilk değere puan eklenir ya da çıkartılır.
        {
        case 1:
            D += 10;
            F -= 10;
            N += 20;
            C -= 10;
            M -= 20;
            break;
        case 2:
            D += 0;
            F += 40;
            N += 10;
            C += 20;
            M += 40;
            break;
        case 3:
            D += 9;
            F += 0;
            N += 11;
            C += 22;
            M -= 20;
            break;
        default:
            printf("Wrong Answer.This is not option.");
            break;
        }
    }
    getch();
    system("cls");
    while (Q3 != 1 && Q3 != 2 && Q3 != 3 && Q3 != 4)//istenilmeyen cevap gelmesini engeller.
    {
        printf("What is the most important thing ?\n1.Human\t  2.Money\n3.Opinion 4.Freedom\n");
        scanf("%d", &Q3);
        switch (Q3)//Burada ikinci değere puan eklenir ya da çıkartılır.
        {
        case 1:
            D += 15;
            F -= 10;
            N += 20;
            C -= 20;
            M -= 2;
            break;
        case 2:
            D += 26;
            F += 15;
            N -= 5;
            C += 0;
            M += 10;
            break;
        case 3:
            D += 11;
            F += 10;
            N += 10;
            C += 10;
            M -= 10;
            break;
        case 4:
            D += 12;
            F -= 20;
            N += 29;
            C -= 5;
            M -= 10;
            break;
        default:
            printf("Wrong Answer.This is not option.");
            break;
        }
    }
    if (D > N && D > F && D > C && D > M)//yolun belirtildiği yerdir.// en fazla puan D de ise çalışır
    {
        Road = 'D';
    }
    if (N > D && N > F && N > C && N > M)// en fazla puan N de ise çalışır
    {
        Road = 'N';
    }
    if (F > N && F > D && F > C && F > M)// en fazla puan F de ise çalışır
    {
        Road = 'F';
    }
    if (C > N && C > F && C > D && C > M)// en fazla puan C de ise çalışır
    {
        Road = 'C';
    }
    if (M > N && M > F && M > C && M > D)// en fazla puan M de ise çalışır.Değerini verir.
    {
        Road = 'M';
    }
    if (F == M && F > N && F > D && F > C)//eşitlik durumunu engellemek için 2 eşitlik durumundan birini engelliyor.M değeri verir.
    {
        Road = 'M';
    }
    if (F == C && F > N && F > D && F > M)//eşitlik durumunu engellemek için 2 eşitlik durumundan birini engelliyor.M değeri verir.
    {
        Road = 'M';
    }
    getch();
    system("cls");
    return Road;
}
// 111-   112-   113-   114-
// 121-   122-   123-   124-
// 131-   132-   133-   134-
// 211-   212-   213-   214-
// 221-   222-   223-   224-
// 231-   232-   233-   234-
// 311-   312-   313-   314-
// 321-   322-   323-   324-
// 331-   332-   333-   334-
// 411-   412-   413-   414-
// 421-   422-   423-   424-
// 431-   432-   433-   434-