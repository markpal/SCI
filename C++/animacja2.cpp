#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;
using namespace std;
using namespace std::this_thread;

char napis[] = {'H', 'e', 'l', 'l', 'o', ' ', 'S', 'C', 'I', ' ', '.', '.', '.'};

string napis2 = "\nI like coding!";

int main()
{
    cout << endl;
    for(int i=0; i<13;i++){
        cout << napis[i] << flush;
        sleep_for(0.5s);
    }
    
    for(int i=0; i<napis2.size(); i++)
    {
        cout << napis2[i] << flush;
        sleep_for(0.5s);
    }
}

