#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace  std;

int randomNumber;
int f();

int main()
{
    int count = 0;
    srand((unsigned)time(0));
    do
    {

        f();
        count++;
        
    } while (10<=randomNumber);
    
     cout << count;

    return 0;
}

int f()
{
    int range = 100;
       
    randomNumber = rand() % range;
    cout << randomNumber <<" "<< endl;
    
    
    
    return randomNumber;

}