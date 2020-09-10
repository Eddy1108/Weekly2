//Weekly2 assignment by Edvard Helgetun

#include <iostream>
#include <conio.h>

int input{0};

void task6() 
{
    system("cls");
    char grade = ' ';
    std::cout << "\nWhat grade would you like to have in Programming 1?   -";
    grade = _getch();
    std::cout << grade;

    switch (grade) {
    case 'A':
    case 'a':
        std::cout << "\nOutstanding!";
        break;
    case 'B':
    case 'b':
        std::cout << "\nVery Good";
        break;
    case 'C':
    case 'c':
        std::cout << "\nGood";
        break;
    case 'D':
    case 'd':
        std::cout << "\nSome flaws";
        break;
    case 'E':
    case 'e':
        std::cout << "\nNot very good...";
        break;
    case 'F':
    case 'f':
        std::cout << "\nFail";
        break;
    default:
        std::cout << "\nThats not a grade!";
        break;
    }

    std::cout << "\n\n";
    system("pause");
}

void task5() 
{
    system("cls");

    int i{ 5 };

    do
    {
        std::cout << "i = " << i << std::endl;
        i += 5;
    } while (i <51);

    std::cout << "Printed from 5 to 50 with a DO WHILE loop: \n";
    system("pause");
}

void task4() 
{
    system("cls");

    for (int i = 5; i < 51; i += 5) 
    {
        std::cout << "i = " << i << std::endl;
    }
    std::cout << "Printed from 5 to 50 with a FOR loop: \n";
    system("pause");
}

void task3() 
{
    system("cls");

    int i{ 5 };

    while (i < 51) 
    {
        std::cout << "i = " << i << std::endl;
        i += 5;
    }
    std::cout << "Printed from 5 to 50 with a WHILE loop: \n";
    system("pause");
}

void task2() 
{
    system("cls");

    for (int i = 100; i > 0; i--)
    {
        std::cout << i << " ";
    }
    std::cout << "\nPrinted from 100 to 1 with a FOR loop: \n";

    system("pause");
}

void task1()
{
    int i{ 1 };
    system("cls");

    while (i < 101)
    {
        std::cout << i << "  ";
        i++;
    }
    std::cout << "\nPrinted from 1 to 100 with a WHILE loop: \n";

    system("pause");
    
    for (int j = 1; j < 101; j++) 
    {
        std::cout << j << " ";
    }
    std::cout << "\nPrinted from 1 to 100 with a FOR loop: \n";

    system("pause");
}

int getInput()
{
    int p{ 0 };
    p = _getch() - '0';

    return p;
}

int main()
{
    while (true) {
        std::cout << "* * * * Welcome to Weekly 2 * * * *" << std::endl;
        std::cout << "Please choose a task from the list:\n" << std::endl;
        std::cout << "1.Print numbers from 1-100 with a WHILE and FOR loop. \n2.Print numbers from 100-1 with a FOR loop. \n3.Print 5-50 in steps of 5 with a WHILE loop. \n4.Print 5-50 in steps of 5 with a FOR loop. \n5.Print 5-50 in steps of 5 with a DO WHILE loop. \n6.Choose what grade you would like";
        input = getInput();

        switch (input) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        case 6:
            task6();
            break;
        default:
            std::cout << "Invalid choice!\n";
            system("pause");
            break;
        }

        system("cls");
    }
}
