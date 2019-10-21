#include <iostream>

using namespace std;

int main()
{
    const int N = 5;
    
    cout << "for" << endl;
    for(int i = 0; i < N; i++)	
    {
        cout << i << endl; 
    }
    
    int i = 0;
    cout << "while - do" << endl;    
    while(i < N)	
    {
        cout << i << endl; 
        i++;
    }

    cout << "do - while" << endl;    
    i = 0;
    do
    {
        cout << i << endl; 
        i++;
    }while(i < N);

    return 0;
}
