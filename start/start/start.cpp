#include <iostream>

void showMainMenu()
{
    std::cout << "Music Service\n";
    std::cout << "1. Select Music\n";
    std::cout << "2. Profile\n";
    std::cout << "3. Exit\n";
    std::cout << "Choose an option: ";
}

void selectMusic()
{
    std::cout << "Music selected\n";
    // You can add logic for selecting music here
}

void viewProfile()
{
    std::cout << "Profile\n";
    // You can add logic for viewing the profile here
}

int main()
{
    int option;
    bool exit = false;

    while (!exit)
    {
        showMainMenu();
        std::cin >> option;

        switch (option)
        {
        case 1:
            selectMusic();
            break;
        case 2:
            viewProfile();
            break;
        case 3:
            exit = true;
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

        std::cout << std::endl;
    }

    std::cout << "Thank you for using the music service!\n";

    return 0;
}
