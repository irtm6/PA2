#include "FuncA.h"
#include <cmath>

FuncA::FuncA() {

}

long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    long long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

double FuncA:: count(double x) 
{
double sum = 0.0;
int terms = 3;

    for (int n = 0; n < terms; n++) {
        long long numerator = factorial(2 * n); // чисельник (2n)!
        long long denominator = std::pow(4, n) * std::pow(factorial(n), 2) * (2 * n + 1); // знаменник
        double term = (static_cast<double>(numerator) / denominator) * std::pow(x, 2 * n + 1); // обчислення члена ряду
        sum += term;
}
return sum;
}
