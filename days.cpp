#include <iostream>
using namespace std;

int main(){
    int year, month1, days1, month2, days2, sum;
    std::cout << "Enter year, month1, days1, month2, days2" << std::endl;
    std::cin >> year >> month1 >> days1 >> month2 >> days2;

    int arr[] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
        arr[2] = 29;
    else
         arr[2] = 28;

    int raz = 0;
    if(month2 - month1 == 0)
        sum = days2 - days1;
    else{
        for (int val = month1 + 1; val < month2; val++)
            raz += arr[val];
        sum = (arr[month1] - days1) + raz + days2;
    }

    std::cout << "Displaying the number of days: " << sum << std::endl;
    return 0;
}

