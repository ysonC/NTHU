#include <iostream>
#include <cmath>

using namespace std;
//0000 ==> 00:00 a.m.
//1200  ==> 12:00 p.m.
int main()
{
    int time,hr, min;
    char zeros;
    string nt;

    cin >> time;
    
    hr = time /100;
    min = hr * 100 - time;

    if (abs(min) <= 60 && hr <= 24)
    {
        if (hr < 12 )
            nt = "a.m.";
        else 
            hr -= 12;
            nt = "p.m.";
        
        if (min == 0 && hr == 0)
            cout << 0 << 0 << ":" << 0 << 0 << " " << nt;

        else if (min == 0)
            cout << hr << ":" << 0 << 0 << " " << nt;

        else if (hr == 0)
            cout << 0 << 0 << ":" << abs(min) << " " << nt;
        
        else if (min != 0 & hr != 0)
            cout << hr << ":" << abs(min) << " " << nt;
    }    


}