#include <iostream>
#include <vector>

class calc 
{
    double max {};
    [[maybe_unused]] double combo {0};

    std::vector<double>  num1  { max };
    std::vector<double>  num2  { max };
    std::vector<double>  sum   {     };
    std::vector<double>  diff  {     };
    std::vector<double>  prod  {     };
    std::vector<double>  quo   {     };

    int main()
    {
       std::cout << "hey kid pick a numba\n";
       std::cin >> max;
       std::cout << "good choice, here's ya stuff\n";
    }

    double num()
    {
        for (double i {0}; i < max; i++)
        {
            num1[i] = i;
            num2[i] = i;
            max = i;
        }
    }

    double equation()
    {
        double k{};
        for (double i = 0; i < max; i++) 
        {
            for (double j = 0; j < max; j++) {
                double e{}, n{};
                num1[i]  =  e;
                num2[j]  =  n;
                sum[k]   =  e + n;
                diff[k]  =  e - n;
                prod[k]  =  e * n;
                quo[k]   =  e / n;
                k++;
            }
        }
    }

    int debug()
    {
        for(int i = 0; i < max; i++)
        {
            std::cout << num1[i] << " + " << num2[i] << " = " << sum[i] << "\n";
            std::cout << num1[i] << " - " << num2[i] << " = " << diff[i] << "\n";
            std::cout << num1[i] << " * " << num2[i] << " = " << prod[i] << "\n";
            std::cout << num1[i] << " / " << num2[i] << " = " << quo[i] << "\n";
        }
        
    }
};