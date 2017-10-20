#include <iostream>

int FibonacciToMaxValue(int maxValue)
{
    int f {0};
    int f0 {0};
    int f1 {1};
    int prev {0};

    int i {0};
    while(true)
    {
        if(i > 1)
        {
            prev = f;
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else
            f = i;

        if(f > maxValue)
            return prev;

        ++i;
    }

    return 0;
}

int FibonacciToNthValue(int param)
{
    int f {0};
    int f0 {0};
    int f1 {1};

    for(int i = 0; i <= param; ++i)
    {
        if(i > 1)
        {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else
            f = i;
    }

    return f;
}

int main(int argc, char *argv[])
{
    int option {0};
    int param {0};
    std::cout << "Choose an option: " << std::endl;
    std::cout << "1. Value is the limit" << std::endl;
    std::cout << "2. Nth number is the limit" << std::endl;
    std::cin >> option;

    if(option == 1)
    {
        std::cout << "Set max value: " << std::endl;
        std::cin >> param;
    }
    else if(option == 2)
    {
        std::cout << "Set max nth number: " << std::endl;
        std::cin >> param;
    }

    switch (option) {
    case 1:
        std::cout << FibonacciToMaxValue(param);
        break;
    case 2:
        std::cout << FibonacciToNthValue(param);
        break;
    default:
        std::cout << "Incorrect option" << std::endl;
        break;
    }
    return 0;
}
