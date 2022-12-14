#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono; 
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.


int main()
{
    int i = 0;

    while(1)
    {
        if(i % 2 == 0)
        {
            cout << "   O   \n";
            cout << "  /|\\  \n";
            cout << "  / \\  \n";
        }
        else
        {
            cout << "  \\O/   \n";
            cout << "   |  \n";
            cout << "  / \\  \n";  
        }
        sleep_for(0.5s);
        cout << "\033[2J";
        i++;
    }
    

    return 0;
}

