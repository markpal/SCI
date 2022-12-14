#include <iostream>
#include <iomanip>  //flush
#include <chrono>
#include <thread>

using namespace std::chrono_literals;  // ms us ns s
using namespace std;
using namespace std::this_thread;

// flush - czysci bufor cout

char napis[] = {'H', 'e', 'l', 'l', 'o', ' ', 'S', 'C', 'I', ' ', '.', '.', '.'};

string napis2 = "\nI like coding!";

int main()
{
    cout << endl;
    char c;
    
    for(int i=0; i<13;i++){
        cout << napis[i] << flush;
        sleep_for(0.5s);
    }
    
    for(int i=0; i<napis2.size(); i++)
    {
        cout << napis2[i] << flush;
        sleep_for(0.5s);
    }
    
    cout << endl;
    
    for(c = 'A'; c<='Z'; c++)
    {
        cout << c << flush;
        sleep_for(0.2s);
    }
}
