#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "Orta.c"//Orta.c klasörden fonksiyon çeker
#include "ilk.c"
#include "Son.c"
void main()
{
    system("color 09");//renklendirme sağlıyor.
    char path,person,vv;//path = hangi son.c deki fonk. çekeceğini seçecek değişken.person son.c deki fonksiyonun sonucunu çeken.
    int j;
    char list[10] = "oooooooooo";
    for(j = 0;j < 10 ; j++)//fonksiyonu istenilen kadar çalıştıracak döngü
    {
    Soru1();//ilk.c den Soru1 fonksiyonu çeker.
    getch();//ekranı temizlemek için kullanılan bir ikili kod dizisidir.
    system("cls");
    Soru2();//ilk.c den Soru1 fonksiyonu çeker.
    getch();
    system("cls");
    path = soru3();//Orta.c den soruların fonksiyonunu çekip kullanır.Burada hangi son.c den fonksiyonu çalıştıracağını belirlemek için path değeri görev alır.
        if (path == 'M')
        {
        system("color 05");
       person = Msorular();
       list[j] = person;
        }
        if (path == 'N')
        {
        system("color 00");
        person = Nsorular();
        list[j] = person;
        }
        if (path == 'C')
        {
        system("color 04");
        person = Csorular();
        list[j] = person;
        }
        if (path == 'D')
        {
        system("color 01");
        person = Dsorular();
        list[j] = person;
        }
        if (path == 'F')
        {
        system("color 07");
        person = Fsorular();
        list[j] = person;
        }
        printf("\nDo you want finish test ?(Yes=Y;No=N)\n");//devam edip etmeme sorusu
        scanf("%s", &vv);
        getch();
        system("cls");
        if (vv == 'Y' || vv == 'y')
        {
            break;//Testi bitirmek için bu if kısmı çalışıp bu döngüyü kapatır.
        }
        if(vv == 'N' || vv == 'n')
        {
        system("cls");
        }
    }
    int k = 0;
    while(k < 10)//Testin sonucunu kaydetmek için 10 a kadar sayı tutabilen bir döngü
    {
        int i = k + 1;

        if (list[k] == 'C')
        {
            printf("%d Carl Gustaf Emil Mannerheim\n",i);
        }
        if (list[k] == 'K')
        {
            printf("%d Mustafa Kemal Pasha\n",i);
        }
        if (list[k] == 'F')
        {
            printf("%d Fevzi Pasha\n",i);
        }
        if (list[k] == 'i')
        {
            printf("%d Ismet Pasha\n",i);
        }
        if (list[k] == 's')
        {
            printf("%d Swiss Council\n",i);
        }
        if (list[k] == 'n')
        {
            printf("%d Neville Chamberlain\n",i);
        }
        if (list[k] == 'e')
        {
            printf("%d Edouard Daladier\n",i);
        }
        if (list[k] == 't')
        {
            printf("%d Harry S. Truman\n",i);
        }
        if (list[k] == 'W')
        {
            printf("%d .Winston Churchil\n",i);
        }
        if (list[k] == 'R')
        {
            printf("%d Franklin D. Roosevelt\n",i);
        }
        if (list[k] == 'B')
        {
            printf("%d Benito Mussolini\n",i);
        }
        if (list[k] == 'f')
        {
            printf("%d Francisco Franco Bahamonde\n",i);
        }
        if (list[k] == 'S')
        {
            printf("%d António de Oliveira Salazar\n",i);
        }
        if (list[k] == 'E')
        {
            printf("%d Erich von Manstein\n",i);
        }
        if (list[k] == 'H')
        {
            printf("%d Adolf Hitler\n",i);
        }
        if (list[k] == 'J')
        {
            printf("%d Joseph Stalin\n",i);
        }
        if (list[k] == 'G')
        {
            printf("%d Georgi Jukov\n",i);
        }
        if (list[k] == 'Z')
        {
            printf("%d Mao Zedong\n",i);
        }
        if (list[k] == 'a')
        {
            printf("%d Abdülaziz Al Saud\n",i);
        }
        if (list[k] == 'r')
        {
            printf("%d Rashid Ali al-Gaylani\n",i);
        }
        if (list[k] == 'm')
        {
            printf("%d Mohammad Reza Pahlavi\n",i);
        }
        if (list[k] == 'h')
        {
            printf("%d Hirohito\n",i);
        }
        if (list[k] == 'p')
        {
            printf("%d Puyi\n",i);
        }
        if (list[k] == 'o')
        {
            printf("%d\n",i);
        }
        k++;// fonksiyonun sonsuz döngüye girmesini engelleyen kısım.
    }    
}
//1.C 2.K 3.F 4.i 5.s 6.n 7.e 8.t 9.W 10.R 11.B 12.f 13.S 14.E 15.H 16.J 17.G 18.Z 19.a 20.r 21.m 22.h 23.p 24.o
//1.C = Carl Gustaf Emil Mannerheim
//2.K = Mustafa Kemal Pasha
//3.F = Fevzi Pasha
//4.i = Ismet Pasha
//5.s = Swiss Council
//6.n = Neville Chamberlain
//7.e = Edouard Daladier
//8.t = Harry S. Truman
//9.W = Winston Churchil
//10.R = Franklin D. Roosevelt
//11.B = Benito Mussolini
//12.f = Francisco Franco Bahamonde
//13.S = António de Oliveira Salazar
//14.E = Erich von Manstein
//15.H = Adolf Hitler
//16.J = Joseph Stalin
//17.G = Georgi Jukov
//18.Z = Mao Zedong
//19.a = Abdülaziz Al Saud
//20.r = Rashid Ali al-Gaylani
//21.m = Mohammad Reza Pahlavi
//22.h = Hirohito
//23.p = Puyi
//24.o = Yok.
