#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define RESET "\x1b[0m"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define WHITE "\x1b[37m"
#define BOLD "\x1b[1m"

void printAnimated(const char *text, int centerWidth, const char *color)
{
    int length = strlen(text);
    int spaces = (centerWidth - length) / 2;

    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < length; i++)
    {
        printf("%s%c", color, text[i]);
        fflush(stdout);
        Sleep(50);
    }
    printf(RESET "\n");
}

int FrontPage()
{
    int centerWidth = 150;

    Sleep(2000);
    printf("\n\n");

    printAnimated("--------------------------------------------------", centerWidth, CYAN);
    printAnimated("A Project Proposal on", centerWidth, YELLOW);
    printAnimated("\"Inventory Management System\"", centerWidth, GREEN);
    printAnimated("--------------------------------------------------", centerWidth, CYAN);
    printf("\n");

    printAnimated("Submitted in partial fulfillment of the", centerWidth, BLUE);
    printAnimated("requirements for the degree of \"Bachelor of", centerWidth, MAGENTA);
    printAnimated("Computer Engineering\" Under", centerWidth, YELLOW);
    printAnimated("Tribhuvan University", centerWidth, GREEN);
    printAnimated("Institute Of Engineering (IOE) ", centerWidth, GREEN);
    printAnimated("Pulchowk Campus, Lalitpur", centerWidth, YELLOW);
    printf("\n");

    printAnimated("--------------------------------------------------", centerWidth, CYAN);
    printAnimated(" ::) The Project Prepared By (:: ", centerWidth, YELLOW);
    printAnimated(" ::) Team Member's Details shown below (:: ", centerWidth, GREEN);
    printAnimated("--------------------------------------------------", centerWidth, CYAN);
    printf("\n");
    printAnimated("Roll. No: 081BCT024", centerWidth, WHITE);
    printAnimated("Submitted by:", centerWidth, BOLD);
    printAnimated("Name: Bibash Kumar Thakur", centerWidth, WHITE);
    printAnimated("Group: 081BCT-A", centerWidth, YELLOW);
    printf("\n");

    printf("\n");
    printAnimated("Roll. No: 081BCT001", centerWidth, WHITE);
    printAnimated("Submitted by:", centerWidth, BOLD);
    printAnimated("Name: Aadarsha Pokharel", centerWidth, WHITE);
    printAnimated("Group: 081BCT-A", centerWidth, YELLOW);
    printf("\n");

    printf("\n");
    printAnimated("Roll. No: 081BCT019", centerWidth, WHITE);
    printAnimated("Submitted by:", centerWidth, BOLD);
    printAnimated("Name: Anurag Chaudhary", centerWidth, WHITE);
    printAnimated("Group: 081BCT-A", centerWidth, YELLOW);
    printf("\n");

    printf("\n");
    printAnimated("Roll. No: 081BCT020", centerWidth, WHITE);
    printAnimated("Submitted by:", centerWidth, BOLD);
    printAnimated("Name: Apil Gaire", centerWidth, WHITE);
    printAnimated("Group: 081BCT-A", centerWidth, YELLOW);
    printf("\n");

    printAnimated("--------------------------------------------------", centerWidth, CYAN);
    printf("\n");
    printAnimated("Under the supervision of:", centerWidth, BLUE);
    printAnimated("Assistant Professor Mr. Santosh Giri", centerWidth, GREEN);
    printAnimated("Department of Electronics & Computer Engineering", centerWidth, BLUE);
    printf("\n");

    printAnimated("--------------------------------------------------", centerWidth, CYAN);
    printf("\n");
    printAnimated("Date: Feb 19, 2025", centerWidth, YELLOW);
    printf("\n\n");
    printAnimated("*****Please Enter any key to Start the Project****", centerWidth, CYAN);
    getch();
    return 0;
}
