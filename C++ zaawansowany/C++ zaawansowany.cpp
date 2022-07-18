#include <iostream>

double divide(double a, double b)
{
    if (b == 0)
    {
        throw std::string("Nie dziel przez zero"); // to jest ten error
    }
    return a / b;
}

int main()
{
    int a = 0;
    int b = 0;
    while (true)
    {
        std::cin >> a >> b;

        try
        {
            double wynik = divide(a, b);
            std::cout << "Wynik dzielenia: " << wynik << std::endl << std::endl;
        }
        catch (std::string& error)
        {
            std::cout << error << std::endl; // to jest w funkcji zdefiniowane, w throw
        }
    }
   
}