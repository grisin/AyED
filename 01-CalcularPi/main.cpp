#include <iostream>
#include <cmath>
#include <iomanip>

const float PI = 3.141592;

int main(void)
{
    float ac = 0;
    float temp;
    size_t cont = 0;

    std::cout << std::fixed;
    std::cout << std::setprecision(6);

    while (ac != PI/4)
    {
        temp = pow(-1,cont)/((2 * cont) + 1);
        ac += temp;
        cont++;
    }
    std::cout << "Valor: " << (4 * ac) << ". Se llego en " << cont << " iteraciones." << std::endl;
    

    return 0;
}