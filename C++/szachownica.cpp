/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

#define N 8

using namespace std;

int main()
{
    int i,j;
    
    for(i=0; i<N; i++){
      for(j=0; j<N; j++)
        cout << (((i+j)%2 == 0) ? 'X' : '_');  // te nawiasy sa wazne, sprobuj bez
      cout << endl;    
    }
    
    return 0;
}
