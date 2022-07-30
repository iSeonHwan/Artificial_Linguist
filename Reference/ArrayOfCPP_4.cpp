#include <array>
#include <iostream>

typedef std::array<int, 4> Myarray;
int main()
{
    typedef std::array<double, 4> Myarray;

    Myarray c0 = { 0.5, 1.4, 2.3 };

    // display contents " 0 1 2 3"
    for (const auto& it : c0)
    {
        //std::cout << " " << it;
        std::cout << " "<< it;
    }
    std::cout << std::endl;

    Myarray c1(c0);

    // display contents " 0 1 2 3"
    for (const auto& it : c1)
    {
        std::cout << " " << it;
    }
    std::cout << std::endl;

    return (0);
}
