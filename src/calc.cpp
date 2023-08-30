#include <iostream>
#include <vector>

#include "../h/calc.hpp"
#include "../h/calc.hpp"

using namespace std;

class calc 
{
    double max {};
    [[maybe_unused]] double combo {0}; // will be used to store number of max equation combos

    vector<double>  num1  { max };
    vector<double>  num2  { max };
    vector<double>  sum   {     };
    vector<double>  diff  {     };
    vector<double>  prod  {     };
    vector<double>  quo   {     };

    // int num assigns a number dynamically to vector up to max, declared by user
    int num()
    {
        for (double i {0}; i < max; i++)
        {
            num1[i] = i;
            num2[i] = i;
        }
    }

    //  equation() uses a nested for loop to get possible combos of equations and their solutions
    int equation()
    {
        int k{};
        for (int i = 0; i < max; i++) 
        {
            for (int j = 0; j < max; j++) {
                double e{}, n{};
                sum[k]   =  e + n;
                diff[k]  =  e - n;
                prod[k]  =  e * n;
                quo[k]   =  e / n;
                k++;
            }
        }
    }

    void debug()
    {
        for(int i = 0; i < max; i++)
        {
            cout << num1[i] << " + " << num2[i] << " = " << sum[i]  << "\n";
            cout << num1[i] << " - " << num2[i] << " = " << diff[i] << "\n";
            cout << num1[i] << " * " << num2[i] << " = " << prod[i] << "\n";
            cout << num1[i] << " / " << num2[i] << " = " << quo[i]  << "\n";
        }
        
    }
};