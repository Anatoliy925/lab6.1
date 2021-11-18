#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

void genocide(int* a, const int lenght);
int sum(int* a, const int lenght);
int quantity(int* a, const int lenght);
void print(int* n, const int lenght);
void initialization(int* a, const int lenght, const int low, const int high);


int main(){
    const int N = 20;
    int t[N];
    srand((unsigned) time(NULL));
    
    initialization(t, N, -14, 7);
    cout << "t[20] =";
    print(t, N);
    
    cout<<"Кількість елементів, що задовільняють критерію: "<< quantity(t, N) << endl;
    cout<< "Сума: " << sum(t, N) << endl;
    
    genocide(t, N);
    
    print(t, N);
    return 0;
}
void genocide(int* a, const int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        if(a[i] > 0 && !(i%4==0))
        {
            a[i] = 0;
        }
    }
    
}
int sum(int* a, const int lenght)
{
    int S = 0;
    for(int i = 0; i < lenght; i++)
    {
        if(a[i] > 0 && !(i%4==0))
        {
            S += a[i];
        }
    }
    return S;
}
int quantity(int* a, const int lenght)
{
    int n = 0;
    for(int i = 0; i < lenght; i++)
    {
        if(a[i] > 0 && !(i%4==0))
        {
            n++;
        }
    }
    return n;
}
void print(int* n, const int lenght)
{
    for (int i = 0; i < lenght; i++)
        cout << setw(4) << n[i];
    cout << endl;
}
void initialization(int* a, const int lenght, const int low, const int high)
{
    for (int i = 0; i < lenght; i++)
    {
        a[i] = low + rand() % (high - low + 1);
    }
}
