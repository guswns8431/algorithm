#include <iostream>
using namespace std;

int main()
{
    int birthYear,birthMonth,birthDate;
    int benchmarkYear,benchmarkMonth,benchmarkDate;
    int worldAge,countAge,yearAge;

    cin >> birthYear >> birthMonth >> birthDate;
    cin >> benchmarkYear >> benchmarkMonth >> benchmarkDate;

    if(benchmarkYear > birthYear)
    {
        if(benchmarkMonth < birthMonth)
        {
            worldAge = benchmarkYear - birthYear - 1;
        }
        else
        {
            if(benchmarkDate < birthDate)
            {
                worldAge = benchmarkYear - birthYear - 1;
            }
            else
            {
                worldAge = benchmarkYear - birthYear;
            }
            
        }
        
    }
    else
    {
        worldAge = 0;
    }

    countAge = benchmarkYear - birthYear + 1;

    yearAge = benchmarkYear - birthYear;

    cout << worldAge << "\n" << countAge << "\n" << yearAge;

    return 0;
}
