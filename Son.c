#include <stdio.h>
#include <stdlib.h> //cls için
#include <conio.h>  //getch için
char Msorular()     // Road = M olduğu durumda çalışacak.Buradan direk kişinin Bu yoldaki hangi lider olduğunu karar vermek için konulmuş sorular vardır.
{
    char zz, t;
    printf("Do you like competitive life style(Yes=Y;No=N)\n");
    scanf("%s", &zz); // yes no sorusunun cevabının alır.
    if (zz == 'Y' || zz == 'y')
    {
        char yy;
        printf("Can you take decision easily without help ? (Yes=Y;No=N)\n");
        scanf("%s", &yy);
        if (yy == 'Y' || yy == 'y')
        {
            printf("You are Hirohito.\n(Press Enter for information)\n");
            getch();
            system("cls");
            char *filename = "hirohito.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'h';
        }
        if (yy == 'N' || yy == 'n')
        {
            printf("You are Puyi.\n(Press Enter for information)\n");
            getch();
            ;
            system("cls");
            char *filename = "puyi.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'p';
        }
    }
    if (zz == 'N' || zz == 'n')
    {
        char vv, t;
        printf("İf you see time-consuming problem.\nDo you give effort for fix it ?(Yes=Y;No=N)\n");
        scanf("%s", &vv);
        if (vv == 'Y' || vv == 'y') // 1.N-Y yolu
        {
            char t;
            printf("Do you get experince from your failures ? (Yes=Y;No=N)\n"); // Cevabı sonucu değiştirmeyen ama yine de cevap alabilen bir soru
            scanf("%s", &t);
            if (t == 'Y' || t == 'y')
            {
                printf("You are Mohammad Reza Pahlavi.\n(İran King 1940s)\n");
                getch();
                system("cls");
                char *filename = "Mrpa.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'm';
            }
            if (t == 'N' || t == 'n')
            {
                printf("You are Mohammad Reza Pahlavi.\n(Press Enter for information)\n");
                getch();
                system("cls");
                char *filename = "Mrpa.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'm';
            }
        }
        if (vv == 'N' || vv == 'n')
        {
            char aa, t;
            printf("Are you brave ? (Yes=Y;No=N)\n");
            scanf("%s", &aa);
            if (aa == 'Y' || aa == 'y')
            {
                printf("You are Rashid Ali al-Gaylani.\n(Press Enter for information)\n"); // N-N-Y yolu
                getch();
                system("cls");
                char *filename = "Raali.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);

                t = 'r';
            }
            if (aa == 'N' || aa == 'n')
            {
                printf("You are Abdülaziz Al Saud.\n(Press Enter for information)\n"); // N-N-N yolu
                getch();
                system("cls");
                char *filename = "Saud.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'a';
            }
        }
    }
    return t;
}
char Csorular() // C yoluna girildiğinde bu fonksiyon çalışacak.
{
    char zz, t;
    printf("Are you succesful in your life without luck ? (Yes=Y;No=N)\n");
    scanf("%s", &zz);
    if (zz == 'Y' || zz == 'y')
    {
        char yy;
        printf("Do you thing 'production is important than farming'? (Yes=Y;No=N)\n");
        scanf("%s", &yy);
        if (yy == 'Y' || yy == 'y')
        {
            printf("You are Mao Zedong.\n(Press Enter for information)\n");
            getch();
            system("cls");
            char *filename = "Mao.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'Z';
        }
        if (yy == 'N' || yy == 'n')
        {
            printf("Georgi Jukov.\n(Press Enter for information)\n");
            getch();
            system("cls");
            char *filename = "Jukov.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'G';
        }
    }
    if (zz == 'N' || zz == 'n')
    {
        printf("You are Joseph Stalin\n(Press Enter for information)\n");
        getch();
        system("cls");
        char *filename = "Stalin.txt";
        FILE *fp = fopen(filename, "r");

        if (fp == NULL)
        {
            printf("Error: could not open file %s", filename);
            t = 'K';
            return t;
        }

        // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
        const unsigned MAX_LENGTH = 256;
        char buffer[MAX_LENGTH];

        while (fgets(buffer, MAX_LENGTH, fp))
            printf("%s", buffer);

        // Metin belgesini yazdırdıktan sonra kapatır
        fclose(fp);
        t = 'J';
    }
    return t;
}
char Fsorular() // Yapım aşamasında daha dokunulmadı.Sorular edit aşamasında.yapım aşaması bitti.F değeri gelirse çalışan yol.
{
    char zz, t;
    printf("Do you like fighting for strenght ?(Yes=Y;No=N)\n");
    scanf("%s", &zz);
    if (zz == 'Y' || zz == 'y')
    {
        char yy;
        printf("Are you crazy about It ? (Yes=Y;No=N)\n");
        scanf("%s", &yy);
        if (yy == 'Y' || yy == 'y')
        {
            printf("You are Adolf Hitler.\n(Press Enter for information)\n");
            getch();
            system("cls");
            char *filename = "Hitler.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'H';
        }
        if (yy == 'N' || yy == 'n')
        {
            printf("You are Erich von Manstein.\n(Press Enter for information)\n");
            getch();
            system("cls");
            char *filename = "Manstein.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'E';
        }
    }
    if (zz == 'N' || zz == 'n')
    {
        char vv;
        printf("Do you like Monarchy?(Yes=Y;No=N)\n");
        scanf("%s", &vv);
        if (vv == 'Y' || vv == 'y') // 1.N-Y yolu
        {
            char tt;
            printf("Do you have Stable Mental Health ? (Yes=Y;No=N)\n");
            scanf("%s", &tt);
            if (tt == 'Y' || tt == 'y')
            {
                printf("You are António de Oliveira Salazar.\n(Press Enter for information)\n");
                getch();
                ;
                system("cls");
                char *filename = "Salazar.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'S';
            }
            if (tt == 'N' || tt == 'n')
            {
                printf("You are Benito Mussolini.\n(Press Enter for information)\n");
                getch();
                ;
                system("cls");
                char *filename = "Mussolini.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'B';
            }
        }
        if (vv == 'N' || vv == 'n')
        {
            char aa;
            printf("Are you clever ? (Yes=Y;No=N)\n");
            scanf("%s", &aa);
            if (aa == 'Y' || aa == 'y')
            {
                printf("You are Francisco Franco Bahamonde.\n(Press Enter for information)\n"); // N-N-Y yolu
                getch();
                system("cls");
                char *filename = "Franco.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'f';
            }
            if (aa == 'N' || aa == 'n')
            {
                printf("You are Benito Mussolini.\n(Press Enter for information)\n"); // N-N-N yolu
                getch();
                system("cls");
                char *filename = "Mussolini.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'B';
            }
        }
    }

    return t;
}
char Dsorular() // D yolu gelirse bu sorular sırasıyla gelecek.
{
    char zz, t;
    printf("Do you care other people ?(Yes=Y;No=N)");
    scanf("%s", &zz);
    if (zz == 'Y' || zz == 'y')
    {
        char yy;
        printf("Are you lucky ? (Yes=Y;No=N)\n");
        scanf("%s", &yy);
        if (yy == 'Y' || yy == 'y')
        {
            printf("You are Franklin D. Roosevelt.\n(Press Enter for information)\n");
            getch();
            system("cls");
            char *filename = "FDR.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'R';
        }
        if (yy == 'N' || yy == 'n')
        {
            printf("You are Winston Churchil.\n(Press Enter for information)");
            getch();
            system("cls");
            char *filename = "Churchil.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'W';
        }
    }
    if (zz == 'N' || zz == 'n')
    {
        char vv, t;
        printf("If you see Bad situation.\nDo time fix it ?(Yes=Y;No=N)\n");
        scanf("%s", &vv);
        getch();
        system("cls");
        if (vv == 'Y' || vv == 'y') // 1.N-Y yolu
        {
            char tt;
            printf("Is luck trustable for you ? (Yes=Y;No=N)\n"); // Cevabı sonucu değiştirmeyen ama yine de cevap alabilen bir soru
            scanf("%s", &tt);
            getch();
            system("cls");
            if (tt == 'Y' || tt == 'y')
            {
                printf("You are Harry S. Truman.\n(Press Enter for information)\n");
                getch();
                system("cls");
                char *filename = "Truman.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 't';
            }
            if (tt == 'N' || tt == 'n')
            {
                printf("You are Edouard Daladier.\n(Press Enter for information)\n");
                getch();
                system("cls");
                char *filename = "Daladier.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'e';
            }
        }
        if (vv == 'N' || vv == 'n')
        {
            char aa;
            printf("Are you unlucky ? (Yes=Y;No=N)\n");
            scanf("%s", &aa);
            getch();
            system("cls");
            if (aa == 'Y' || aa == 'y')
            {
                printf("You are Edouard Daladier.\n(Press Enter for information)\n"); // N-N-Y yolu
                getch();
                ;
                system("cls");
                char *filename = "Daladier.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'e';
            }
            if (aa == 'N' || aa == 'n')
            {
                printf("You are Neville Chamberlain.\n(Press Enter for information)\n"); // N-N-N yolu
                getch();
                system("cls");
                char *filename = "Chamberlein.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'n';
            }
        }
    }
    return t;
}
char Nsorular() // N yolu gelirse bu sorular sırasıyla gelecek.
{
    char zz, t;
    printf("Can\'t you hide your aim ?(Yes=Y;No=N)\n");
    scanf("%s", &zz);
    if (zz == 'Y' || zz == 'y')
    {
        char yy;
        printf("Should Everyone have free speech right for your opion ? (Yes=Y;No=N)\n");
        scanf("%s", &yy);
        if (yy == 'Y' || yy == 'y')
        {
            printf("You are Swiss Council.\n(Press Enter for information)\n");
            getch();
            system("cls");
            char *filename = "SwissCouncil.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 's';
        }
        if (yy == 'N' || yy == 'n')
        {
            printf("You are Ismet Pasha.\n(Press Enter for information)");
            getch();
            system("cls");
            char *filename = "ismet.txt";
            FILE *fp = fopen(filename, "r");

            if (fp == NULL)
            {
                printf("Error: could not open file %s", filename);
                t = 'K';
                return t;
            }

            // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
            const unsigned MAX_LENGTH = 256;
            char buffer[MAX_LENGTH];

            while (fgets(buffer, MAX_LENGTH, fp))
                printf("%s", buffer);

            // Metin belgesini yazdırdıktan sonra kapatır
            fclose(fp);
            t = 'i';
        }
    }
    if (zz == 'N' || zz == 'n')
    {
        char vv;
        printf("Best Defence is attack.\nDo you agree this opion ?(Yes=Y;No=N)\n");
        scanf("%s", &vv);
        if (vv == 'Y' || vv == 'y') // 1.N-Y yolu
        {
            char tt;
            printf("Can you defence without attacking ? (Yes=Y;No=N)\n"); // Cevabı sonucu değiştirmeyen ama yine de cevap alabilen bir soru
            scanf("%s", &tt);
            if (tt == 'Y' || tt == 'y')
            {
                t = 'K';
            }
            if (tt == 'Y' || tt == 'y')
            {
                printf("You are Mustafa Kemal Pasha.\n(Press Enter for information)\n");
                getch();
                system("cls");
                t = 'K';
                char *bilgiler = "MustafaKemal.txt"; // Metin belgesinden metin çekmek için kullanılan kod dizisi
                FILE *fp = fopen(bilgiler, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", bilgiler);

                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'K';
            }
            if (tt == 'N' || tt == 'n')
            {
                printf("You are Fevzi Pasha.\n(Press Enter for information)\n");
                getch();
                system("cls");
                char *filename = "Fevzi.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'F';
            }
        }
        if (vv == 'N' || vv == 'n')
        {
            char aa;
            printf("Are you multidirectional person ? (Yes=Y;No=N)\n");
            scanf("%s", &aa);
            if (aa == 'Y' || aa == 'y')
            {
                printf("You are Mustafa Kemal Pasha.\n(Press Enter for information)\n"); // N-N-Y yolu
                getch();
                system("cls");
                t = 'K';
                char *filename = "MustafaKemal.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'K';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'K';
            }
            if (aa == 'N' || aa == 'n')
            {
                printf("You are Carl Gustaf Emil Mannerheim.\n(Press Enter for information)\n"); // N-N-N yolu
                getch();
                system("cls");
                char *filename = "Mannerheim.txt";
                FILE *fp = fopen(filename, "r");

                if (fp == NULL)
                {
                    printf("Error: could not open file %s", filename);
                    t = 'C';
                    return t;
                }

                // Belge 256 byte boyutundaki kısmını yazdıracak şekilde çalışır
                const unsigned MAX_LENGTH = 256;
                char buffer[MAX_LENGTH];

                while (fgets(buffer, MAX_LENGTH, fp))
                    printf("%s", buffer);

                // Metin belgesini yazdırdıktan sonra kapatır
                fclose(fp);
                t = 'C';
            }
        }
    }
    return t;
}
// 1.C 2.K 3.F 4.i 5.s 6.n 7.e 8.t 9.W 10.R 11.B 12.f 13.S 14.E 15.H 16.J 17.G 18.Z 19.a 20.r 21.m 22.h 23.p 24.o
// 1.C = Carl Gustaf Emil Mannerheim
// 2.K = Mustafa Kemal Pasha
// 3.F = Fevzi Pasha
// 4.i = Ismet Pasha
// 5.s = Swiss Council
// 6.n = Neville Chamberlain
// 7.e = Edouard Daladier
// 8.t = Harry S. Truman
// 9.W = Winston Churchil
// 10.R = Franklin D. Roosevelt
// 11.B = Benito Mussolini
// 12.f = Francisco Franco Bahamonde
// 13.S = António de Oliveira Salazar
// 14.E = Erich von Manstein
// 15.H = Adolf Hitler
// 16.J = Joseph Stalin
// 17.G = Georgi Jukov
// 18.Z = Mao Zedong
// 19.a = Abdülaziz Al Saud
// 20.r = Rashid Ali al-Gaylani
// 21.m = Mohammad Reza Pahlavi
// 22.h = Hirohito
// 23.p = Puyi
// 24.o = Yok.
