#include <iostream>
using namespace std;

int main()
{
    int day, month, year;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Year: ";
    cin >> year;

    cout << "\nDate: " << day << "/" << month << "/" << year << endl;
    cout << "\nASCII Art for complete date:" << endl;

    int dayDigit1 = 0, dayDigit2 = 0, dayDigitCount = 0;
    if (day >= 10)
    {
        dayDigit1 = day / 10;
        dayDigit2 = day % 10;
        dayDigitCount = 2;
    }
    else
    {
        dayDigit1 = day;
        dayDigitCount = 1;
    }

    int monthDigit1 = 0, monthDigit2 = 0, monthDigitCount = 0;
    if (month >= 10)
    {
        monthDigit1 = month / 10;
        monthDigit2 = month % 10;
        monthDigitCount = 2;
    }
    else
    {
        monthDigit1 = month;
        monthDigitCount = 1;
    }

    int yearDigit1 = year / 1000;
    int yearDigit2 = (year / 100) % 10;
    int yearDigit3 = (year / 10) % 10;
    int yearDigit4 = year % 10;

    for (int line = 0; line < 8; ++line)
    {
        // DAY - first digit
        if (dayDigit1 == 0)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "| $$  | $$  ";
            else if (line == 4)
                cout << "| $$  | $$  ";
            else if (line == 5)
                cout << "| $$  | $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (dayDigit1 == 1)
        {
            if (line == 0)
                cout << "    /$$     ";
            else if (line == 1)
                cout << "   /$$$$    ";
            else if (line == 2)
                cout << "  |_  $$    ";
            else if (line == 3)
                cout << "    | $$    ";
            else if (line == 4)
                cout << "    | $$    ";
            else if (line == 5)
                cout << "    | $$    ";
            else if (line == 6)
                cout << "  /$$$$$$$  ";
            else
                cout << " |________/ ";
        }
        else if (dayDigit1 == 2)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  /$$____/  ";
            else if (line == 5)
                cout << " | $$       ";
            else if (line == 6)
                cout << " | $$$$$$$$ ";
            else
                cout << " |________/ ";
        }
        else if (dayDigit1 == 3)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  |___  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (dayDigit1 == 4)
        {
            if (line == 0)
                cout << " /$$   /$$  ";
            else if (line == 1)
                cout << "| $$  | $$  ";
            else if (line == 2)
                cout << "| $$  | $$  ";
            else if (line == 3)
                cout << "| $$$$$$$$  ";
            else if (line == 4)
                cout << "|_____  $$  ";
            else if (line == 5)
                cout << "      | $$  ";
            else if (line == 6)
                cout << "      | $$  ";
            else
                cout << "      |__/  ";
        }
        else if (dayDigit1 == 5)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "| $$_____/  ";
            else if (line == 2)
                cout << "| $$        ";
            else if (line == 3)
                cout << "| $$$$$     ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (dayDigit1 == 6)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\__/  ";
            else if (line == 3)
                cout << "| $$ /$$$$  ";
            else if (line == 4)
                cout << "| $$|_  $$  ";
            else if (line == 5)
                cout << "| $$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (dayDigit1 == 7)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "|_____ $$/  ";
            else if (line == 2)
                cout << "     /$$/   ";
            else if (line == 3)
                cout << "    /$$/    ";
            else if (line == 4)
                cout << "   /$$/     ";
            else if (line == 5)
                cout << "  /$$/      ";
            else if (line == 6)
                cout << " /$$/       ";
            else
                cout << "|__/        ";
        }
        else
        { // 8
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << " \\  $$$$$$  ";
            else if (line == 4)
                cout << "  >$$__  $$ ";
            else if (line == 5)
                cout << " | $$  \\ $$ ";
            else if (line == 6)
                cout << " |  $$$$$$/ ";
            else
                cout << "  \\______/  ";
        }

        if (dayDigitCount == 2)
        {
            cout << "  ";
            if (dayDigit2 == 0)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << "| $$  | $$  ";
                else if (line == 4)
                    cout << "| $$  | $$  ";
                else if (line == 5)
                    cout << "| $$  | $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
            else if (dayDigit2 == 1)
            {
                if (line == 0)
                    cout << "    /$$     ";
                else if (line == 1)
                    cout << "   /$$$$    ";
                else if (line == 2)
                    cout << "  |_  $$    ";
                else if (line == 3)
                    cout << "    | $$    ";
                else if (line == 4)
                    cout << "    | $$    ";
                else if (line == 5)
                    cout << "    | $$    ";
                else if (line == 6)
                    cout << "  /$$$$$$$  ";
                else
                    cout << " |________/ ";
            }
            else if (dayDigit2 == 2)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "|__/  \\ $$  ";
                else if (line == 3)
                    cout << "   /$$$$$$/ ";
                else if (line == 4)
                    cout << "  /$$____/  ";
                else if (line == 5)
                    cout << " | $$       ";
                else if (line == 6)
                    cout << " | $$$$$$$$ ";
                else
                    cout << " |________/ ";
            }
            else if (dayDigit2 == 3)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "|__/  \\ $$  ";
                else if (line == 3)
                    cout << "   /$$$$$$/ ";
                else if (line == 4)
                    cout << "  |___  $$  ";
                else if (line == 5)
                    cout << " /$$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
            else if (dayDigit2 == 4)
            {
                if (line == 0)
                    cout << " /$$   /$$  ";
                else if (line == 1)
                    cout << "| $$  | $$  ";
                else if (line == 2)
                    cout << "| $$  | $$  ";
                else if (line == 3)
                    cout << "| $$$$$$$$  ";
                else if (line == 4)
                    cout << "|_____  $$  ";
                else if (line == 5)
                    cout << "      | $$  ";
                else if (line == 6)
                    cout << "      | $$  ";
                else
                    cout << "      |__/  ";
            }
            else if (dayDigit2 == 5)
            {
                if (line == 0)
                    cout << " /$$$$$$$$  ";
                else if (line == 1)
                    cout << "| $$_____/  ";
                else if (line == 2)
                    cout << "| $$        ";
                else if (line == 3)
                    cout << "| $$$$$     ";
                else if (line == 4)
                    cout << " \\____  $$  ";
                else if (line == 5)
                    cout << " /$$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
            else if (dayDigit2 == 6)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\__/  ";
                else if (line == 3)
                    cout << "| $$ /$$$$  ";
                else if (line == 4)
                    cout << "| $$|_  $$  ";
                else if (line == 5)
                    cout << "| $$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
            else if (dayDigit2 == 7)
            {
                if (line == 0)
                    cout << " /$$$$$$$$  ";
                else if (line == 1)
                    cout << "|_____ $$/  ";
                else if (line == 2)
                    cout << "     /$$/   ";
                else if (line == 3)
                    cout << "    /$$/    ";
                else if (line == 4)
                    cout << "   /$$/     ";
                else if (line == 5)
                    cout << "  /$$/      ";
                else if (line == 6)
                    cout << " /$$/       ";
                else
                    cout << "|__/        ";
            }
            else if (dayDigit2 == 8)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << " \\  $$$$$$  ";
                else if (line == 4)
                    cout << "  >$$__  $$ ";
                else if (line == 5)
                    cout << " | $$  \\ $$ ";
                else if (line == 6)
                    cout << " |  $$$$$$/ ";
                else
                    cout << "  \\______/  ";
            }
            else
            { // 9
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << "|  $$$$$$$  ";
                else if (line == 4)
                    cout << " \\____  $$  ";
                else if (line == 5)
                    cout << " /$$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
        }
        else
        {
            // print blank 12-char cell when second day digit absent
            cout << "            ";
        }

        // spacer between day and month
        cout << "    ";

        // MONTH - first digit
        if (monthDigit1 == 0)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "| $$  | $$  ";
            else if (line == 4)
                cout << "| $$  | $$  ";
            else if (line == 5)
                cout << "| $$  | $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (monthDigit1 == 1)
        {
            if (line == 0)
                cout << "    /$$     ";
            else if (line == 1)
                cout << "   /$$$$    ";
            else if (line == 2)
                cout << "  |_  $$    ";
            else if (line == 3)
                cout << "    | $$    ";
            else if (line == 4)
                cout << "    | $$    ";
            else if (line == 5)
                cout << "    | $$    ";
            else if (line == 6)
                cout << "  /$$$$$$$  ";
            else
                cout << " |________/ ";
        }
        else if (monthDigit1 == 2)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  /$$____/  ";
            else if (line == 5)
                cout << " | $$       ";
            else if (line == 6)
                cout << " | $$$$$$$$ ";
            else
                cout << " |________/ ";
        }
        else if (monthDigit1 == 3)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  |___  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (monthDigit1 == 4)
        {
            if (line == 0)
                cout << " /$$   /$$  ";
            else if (line == 1)
                cout << "| $$  | $$  ";
            else if (line == 2)
                cout << "| $$  | $$  ";
            else if (line == 3)
                cout << "| $$$$$$$$  ";
            else if (line == 4)
                cout << "|_____  $$  ";
            else if (line == 5)
                cout << "      | $$  ";
            else if (line == 6)
                cout << "      | $$  ";
            else
                cout << "      |__/  ";
        }
        else if (monthDigit1 == 5)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "| $$_____/  ";
            else if (line == 2)
                cout << "| $$        ";
            else if (line == 3)
                cout << "| $$$$$     ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (monthDigit1 == 6)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\__/  ";
            else if (line == 3)
                cout << "| $$ /$$$$  ";
            else if (line == 4)
                cout << "| $$|_  $$  ";
            else if (line == 5)
                cout << "| $$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (monthDigit1 == 7)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "|_____ $$/  ";
            else if (line == 2)
                cout << "     /$$/   ";
            else if (line == 3)
                cout << "    /$$/    ";
            else if (line == 4)
                cout << "   /$$/     ";
            else if (line == 5)
                cout << "  /$$/      ";
            else if (line == 6)
                cout << " /$$/       ";
            else
                cout << "|__/        ";
        }
        else
        { // 8 or 9 handled with else-if below
            if (monthDigit1 == 8)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << " \\  $$$$$$  ";
                else if (line == 4)
                    cout << "  >$$__  $$ ";
                else if (line == 5)
                    cout << " | $$  \\ $$ ";
                else if (line == 6)
                    cout << " |  $$$$$$/ ";
                else
                    cout << "  \\______/  ";
            }
            else
            { // 9
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << "|  $$$$$$$  ";
                else if (line == 4)
                    cout << " \\____  $$  ";
                else if (line == 5)
                    cout << " /$$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
        }

        // MONTH - second digit or blank
        if (monthDigitCount == 2)
        {
            cout << "  ";
            if (monthDigit2 == 0)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << "| $$  | $$  ";
                else if (line == 4)
                    cout << "| $$  | $$  ";
                else if (line == 5)
                    cout << "| $$  | $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
            else if (monthDigit2 == 1)
            {
                if (line == 0)
                    cout << "    /$$     ";
                else if (line == 1)
                    cout << "   /$$$$    ";
                else if (line == 2)
                    cout << "  |_  $$    ";
                else if (line == 3)
                    cout << "    | $$    ";
                else if (line == 4)
                    cout << "    | $$    ";
                else if (line == 5)
                    cout << "    | $$    ";
                else if (line == 6)
                    cout << "  /$$$$$$$  ";
                else
                    cout << " |________/ ";
            }
            else if (monthDigit2 == 2)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "|__/  \\ $$  ";
                else if (line == 3)
                    cout << "   /$$$$$$/ ";
                else if (line == 4)
                    cout << "  /$$____/  ";
                else if (line == 5)
                    cout << " | $$       ";
                else if (line == 6)
                    cout << " | $$$$$$$$ ";
                else
                    cout << " |________/ ";
            }
            else if (monthDigit2 == 3)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "|__/  \\ $$  ";
                else if (line == 3)
                    cout << "   /$$$$$$/ ";
                else if (line == 4)
                    cout << "  |___  $$  ";
                else if (line == 5)
                    cout << " /$$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
            else if (monthDigit2 == 4)
            {
                if (line == 0)
                    cout << " /$$   /$$  ";
                else if (line == 1)
                    cout << "| $$  | $$  ";
                else if (line == 2)
                    cout << "| $$  | $$  ";
                else if (line == 3)
                    cout << "| $$$$$$$$  ";
                else if (line == 4)
                    cout << "|_____  $$  ";
                else if (line == 5)
                    cout << "      | $$  ";
                else if (line == 6)
                    cout << "      | $$  ";
                else
                    cout << "      |__/  ";
            }
            else if (monthDigit2 == 5)
            {
                if (line == 0)
                    cout << " /$$$$$$$$  ";
                else if (line == 1)
                    cout << "| $$_____/  ";
                else if (line == 2)
                    cout << "| $$        ";
                else if (line == 3)
                    cout << "| $$$$$     ";
                else if (line == 4)
                    cout << " \\____  $$  ";
                else if (line == 5)
                    cout << " /$$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
            else if (monthDigit2 == 6)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\__/  ";
                else if (line == 3)
                    cout << "| $$ /$$$$  ";
                else if (line == 4)
                    cout << "| $$|_  $$  ";
                else if (line == 5)
                    cout << "| $$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
            else if (monthDigit2 == 7)
            {
                if (line == 0)
                    cout << " /$$$$$$$$  ";
                else if (line == 1)
                    cout << "|_____ $$/  ";
                else if (line == 2)
                    cout << "     /$$/   ";
                else if (line == 3)
                    cout << "    /$$/    ";
                else if (line == 4)
                    cout << "   /$$/     ";
                else if (line == 5)
                    cout << "  /$$/      ";
                else if (line == 6)
                    cout << " /$$/       ";
                else
                    cout << "|__/        ";
            }
            else if (monthDigit2 == 8)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << " \\  $$$$$$  ";
                else if (line == 4)
                    cout << "  >$$__  $$ ";
                else if (line == 5)
                    cout << " | $$  \\ $$ ";
                else if (line == 6)
                    cout << " |  $$$$$$/ ";
                else
                    cout << "  \\______/  ";
            }
            else
            { // 9
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << "|  $$$$$$$  ";
                else if (line == 4)
                    cout << " \\____  $$  ";
                else if (line == 5)
                    cout << " /$$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
        }
        else
        {
            cout << "            ";
        }

        // spacer between month and year
        cout << "    ";

        // YEAR - digit 1
        if (yearDigit1 == 0)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "| $$  | $$  ";
            else if (line == 4)
                cout << "| $$  | $$  ";
            else if (line == 5)
                cout << "| $$  | $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit1 == 1)
        {
            if (line == 0)
                cout << "    /$$     ";
            else if (line == 1)
                cout << "   /$$$$    ";
            else if (line == 2)
                cout << "  |_  $$    ";
            else if (line == 3)
                cout << "    | $$    ";
            else if (line == 4)
                cout << "    | $$    ";
            else if (line == 5)
                cout << "    | $$    ";
            else if (line == 6)
                cout << "  /$$$$$$$  ";
            else
                cout << " |________/ ";
        }
        else if (yearDigit1 == 2)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  /$$____/  ";
            else if (line == 5)
                cout << " | $$       ";
            else if (line == 6)
                cout << " | $$$$$$$$ ";
            else
                cout << " |________/ ";
        }
        else if (yearDigit1 == 3)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  |___  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit1 == 4)
        {
            if (line == 0)
                cout << " /$$   /$$  ";
            else if (line == 1)
                cout << "| $$  | $$  ";
            else if (line == 2)
                cout << "| $$  | $$  ";
            else if (line == 3)
                cout << "| $$$$$$$$  ";
            else if (line == 4)
                cout << "|_____  $$  ";
            else if (line == 5)
                cout << "      | $$  ";
            else if (line == 6)
                cout << "      | $$  ";
            else
                cout << "      |__/  ";
        }
        else if (yearDigit1 == 5)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "| $$_____/  ";
            else if (line == 2)
                cout << "| $$        ";
            else if (line == 3)
                cout << "| $$$$$     ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit1 == 6)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\__/  ";
            else if (line == 3)
                cout << "| $$ /$$$$  ";
            else if (line == 4)
                cout << "| $$|_  $$  ";
            else if (line == 5)
                cout << "| $$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit1 == 7)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "|_____ $$/  ";
            else if (line == 2)
                cout << "     /$$/   ";
            else if (line == 3)
                cout << "    /$$/    ";
            else if (line == 4)
                cout << "   /$$/     ";
            else if (line == 5)
                cout << "  /$$/      ";
            else if (line == 6)
                cout << " /$$/       ";
            else
                cout << "|__/        ";
        }
        else
        { // 8 or 9
            if (yearDigit1 == 8)
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << " \\  $$$$$$  ";
                else if (line == 4)
                    cout << "  >$$__  $$ ";
                else if (line == 5)
                    cout << " | $$  \\ $$ ";
                else if (line == 6)
                    cout << " |  $$$$$$/ ";
                else
                    cout << "  \\______/  ";
            }
            else
            {
                if (line == 0)
                    cout << "  /$$$$$$$  ";
                else if (line == 1)
                    cout << " /$$__  $$  ";
                else if (line == 2)
                    cout << "| $$  \\ $$  ";
                else if (line == 3)
                    cout << "|  $$$$$$$  ";
                else if (line == 4)
                    cout << " \\____  $$  ";
                else if (line == 5)
                    cout << " /$$  \\ $$  ";
                else if (line == 6)
                    cout << "|  $$$$$$/  ";
                else
                    cout << " \\______/   ";
            }
        }

        // spacer between year digits
        cout << "  ";

        // YEAR - digit 2
        if (yearDigit2 == 0)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "| $$  | $$  ";
            else if (line == 4)
                cout << "| $$  | $$  ";
            else if (line == 5)
                cout << "| $$  | $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit2 == 1)
        {
            if (line == 0)
                cout << "    /$$     ";
            else if (line == 1)
                cout << "   /$$$$    ";
            else if (line == 2)
                cout << "  |_  $$    ";
            else if (line == 3)
                cout << "    | $$    ";
            else if (line == 4)
                cout << "    | $$    ";
            else if (line == 5)
                cout << "    | $$    ";
            else if (line == 6)
                cout << "  /$$$$$$$  ";
            else
                cout << " |________/ ";
        }
        else if (yearDigit2 == 2)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  /$$____/  ";
            else if (line == 5)
                cout << " | $$       ";
            else if (line == 6)
                cout << " | $$$$$$$$ ";
            else
                cout << " |________/ ";
        }
        else if (yearDigit2 == 3)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  |___  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit2 == 4)
        {
            if (line == 0)
                cout << " /$$   /$$  ";
            else if (line == 1)
                cout << "| $$  | $$  ";
            else if (line == 2)
                cout << "| $$  | $$  ";
            else if (line == 3)
                cout << "| $$$$$$$$  ";
            else if (line == 4)
                cout << "|_____  $$  ";
            else if (line == 5)
                cout << "      | $$  ";
            else if (line == 6)
                cout << "      | $$  ";
            else
                cout << "      |__/  ";
        }
        else if (yearDigit2 == 5)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "| $$_____/  ";
            else if (line == 2)
                cout << "| $$        ";
            else if (line == 3)
                cout << "| $$$$$     ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit2 == 6)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\__/  ";
            else if (line == 3)
                cout << "| $$ /$$$$  ";
            else if (line == 4)
                cout << "| $$|_  $$  ";
            else if (line == 5)
                cout << "| $$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit2 == 7)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "|_____ $$/  ";
            else if (line == 2)
                cout << "     /$$/   ";
            else if (line == 3)
                cout << "    /$$/    ";
            else if (line == 4)
                cout << "   /$$/     ";
            else if (line == 5)
                cout << "  /$$/      ";
            else if (line == 6)
                cout << " /$$/       ";
            else
                cout << "|__/        ";
        }
        else if (yearDigit2 == 8)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << " \\  $$$$$$  ";
            else if (line == 4)
                cout << "  >$$__  $$ ";
            else if (line == 5)
                cout << " | $$  \\ $$ ";
            else if (line == 6)
                cout << " |  $$$$$$/ ";
            else
                cout << "  \\______/  ";
        }
        else
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "|  $$$$$$$  ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }

        cout << "  ";

        // YEAR - digit 3
        if (yearDigit3 == 0)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "| $$  | $$  ";
            else if (line == 4)
                cout << "| $$  | $$  ";
            else if (line == 5)
                cout << "| $$  | $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit3 == 1)
        {
            if (line == 0)
                cout << "    /$$     ";
            else if (line == 1)
                cout << "   /$$$$    ";
            else if (line == 2)
                cout << "  |_  $$    ";
            else if (line == 3)
                cout << "    | $$    ";
            else if (line == 4)
                cout << "    | $$    ";
            else if (line == 5)
                cout << "    | $$    ";
            else if (line == 6)
                cout << "  /$$$$$$$  ";
            else
                cout << " |________/ ";
        }
        else if (yearDigit3 == 2)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  /$$____/  ";
            else if (line == 5)
                cout << " | $$       ";
            else if (line == 6)
                cout << " | $$$$$$$$ ";
            else
                cout << " |________/ ";
        }
        else if (yearDigit3 == 3)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  |___  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit3 == 4)
        {
            if (line == 0)
                cout << " /$$   /$$  ";
            else if (line == 1)
                cout << "| $$  | $$  ";
            else if (line == 2)
                cout << "| $$  | $$  ";
            else if (line == 3)
                cout << "| $$$$$$$$  ";
            else if (line == 4)
                cout << "|_____  $$  ";
            else if (line == 5)
                cout << "      | $$  ";
            else if (line == 6)
                cout << "      | $$  ";
            else
                cout << "      |__/  ";
        }
        else if (yearDigit3 == 5)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "| $$_____/  ";
            else if (line == 2)
                cout << "| $$        ";
            else if (line == 3)
                cout << "| $$$$$     ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit3 == 6)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\__/  ";
            else if (line == 3)
                cout << "| $$ /$$$$  ";
            else if (line == 4)
                cout << "| $$|_  $$  ";
            else if (line == 5)
                cout << "| $$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit3 == 7)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "|_____ $$/  ";
            else if (line == 2)
                cout << "     /$$/   ";
            else if (line == 3)
                cout << "    /$$/    ";
            else if (line == 4)
                cout << "   /$$/     ";
            else if (line == 5)
                cout << "  /$$/      ";
            else if (line == 6)
                cout << " /$$/       ";
            else
                cout << "|__/        ";
        }
        else if (yearDigit3 == 8)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << " \\  $$$$$$  ";
            else if (line == 4)
                cout << "  >$$__  $$ ";
            else if (line == 5)
                cout << " | $$  \\ $$ ";
            else if (line == 6)
                cout << " |  $$$$$$/ ";
            else
                cout << "  \\______/  ";
        }
        else
        { // 9
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "|  $$$$$$$  ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }

        cout << "  ";

        // YEAR - digit 4
        if (yearDigit4 == 0)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "| $$  | $$  ";
            else if (line == 4)
                cout << "| $$  | $$  ";
            else if (line == 5)
                cout << "| $$  | $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit4 == 1)
        {
            if (line == 0)
                cout << "    /$$     ";
            else if (line == 1)
                cout << "   /$$$$    ";
            else if (line == 2)
                cout << "  |_  $$    ";
            else if (line == 3)
                cout << "    | $$    ";
            else if (line == 4)
                cout << "    | $$    ";
            else if (line == 5)
                cout << "    | $$    ";
            else if (line == 6)
                cout << "  /$$$$$$$  ";
            else
                cout << " |________/ ";
        }
        else if (yearDigit4 == 2)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  /$$____/  ";
            else if (line == 5)
                cout << " | $$       ";
            else if (line == 6)
                cout << " | $$$$$$$$ ";
            else
                cout << " |________/ ";
        }
        else if (yearDigit4 == 3)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "|__/  \\ $$  ";
            else if (line == 3)
                cout << "   /$$$$$$/ ";
            else if (line == 4)
                cout << "  |___  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit4 == 4)
        {
            if (line == 0)
                cout << " /$$   /$$  ";
            else if (line == 1)
                cout << "| $$  | $$  ";
            else if (line == 2)
                cout << "| $$  | $$  ";
            else if (line == 3)
                cout << "| $$$$$$$$  ";
            else if (line == 4)
                cout << "|_____  $$  ";
            else if (line == 5)
                cout << "      | $$  ";
            else if (line == 6)
                cout << "      | $$  ";
            else
                cout << "      |__/  ";
        }
        else if (yearDigit4 == 5)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "| $$_____/  ";
            else if (line == 2)
                cout << "| $$        ";
            else if (line == 3)
                cout << "| $$$$$     ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit4 == 6)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\__/  ";
            else if (line == 3)
                cout << "| $$ /$$$$  ";
            else if (line == 4)
                cout << "| $$|_  $$  ";
            else if (line == 5)
                cout << "| $$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }
        else if (yearDigit4 == 7)
        {
            if (line == 0)
                cout << " /$$$$$$$$  ";
            else if (line == 1)
                cout << "|_____ $$/  ";
            else if (line == 2)
                cout << "     /$$/   ";
            else if (line == 3)
                cout << "    /$$/    ";
            else if (line == 4)
                cout << "   /$$/     ";
            else if (line == 5)
                cout << "  /$$/      ";
            else if (line == 6)
                cout << " /$$/       ";
            else
                cout << "|__/        ";
        }
        else if (yearDigit4 == 8)
        {
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << " \\  $$$$$$  ";
            else if (line == 4)
                cout << "  >$$__  $$ ";
            else if (line == 5)
                cout << " | $$  \\ $$ ";
            else if (line == 6)
                cout << " |  $$$$$$/ ";
            else
                cout << "  \\______/  ";
        }
        else
        { // 9
            if (line == 0)
                cout << "  /$$$$$$$  ";
            else if (line == 1)
                cout << " /$$__  $$  ";
            else if (line == 2)
                cout << "| $$  \\ $$  ";
            else if (line == 3)
                cout << "|  $$$$$$$  ";
            else if (line == 4)
                cout << " \\____  $$  ";
            else if (line == 5)
                cout << " /$$  \\ $$  ";
            else if (line == 6)
                cout << "|  $$$$$$/  ";
            else
                cout << " \\______/   ";
        }

        cout << endl;
    }

    return 0;
}