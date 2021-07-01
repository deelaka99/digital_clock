#include <stdio.h>
#include <conio.h>

void clr()
{
    system("cls");
}

void main()
{
    double i;
    int h = 0, m = 0, s = 0;
    //clrscr();
    clr();

    printf("Please enter a time format in HH:MM:SS =>");
    scanf("%d%d%d",&h, &m, &s);
    start:

    for(h; h < 24; h++)
    {
        for(m; m < 60; m++)
        {
            for(s; s < 60; s++)
            {
                //clrscr();
                clr();
                printf("\n\n\n\n\n\t\t\t\t\t\t------------\n");
                printf("\t\t\t\t\t\t|%d:%d:%d", h, m, s);

                if(h < 12)
                {
                    printf(" AM|\n");
                }
                else
                {
                    printf(" PM|\n");
                }
                printf("\t\t\t\t\t\t------------\n");

                for(i = 0;i < 3619999; i++)
                i++;
                i--;
            }
            s = 0;
        }
        m = 0;
    }
    h = 0;
    goto start;
    getch(); //changes
}
