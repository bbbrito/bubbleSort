#include <stdlib.h>
#include <ctime>
#include <iostream>
using std::cout;
using std::cin;

bool trocar ( int &, int & );
bool trocar ( double &, double & );
void funcArray( int [], int & );

int main()
{
    int arraySize = 0;
    int count = 0;    
    const int NITER = 5;
    
    cout << "Entre com o tamanho do Array: " << '\n';
    cin >> arraySize;
    int a[ arraySize ];
    
    funcArray( a, arraySize);

    cout << "Os valores do Array sao: " << '\n';
    for (int i = 0; i < arraySize; i++)
        cout << a[i] << '\n';
    
    for (int i = 0; i < NITER - 1; i++)
    {
        for(int j = 1; j < arraySize; j++)
        {
            trocar( a[j], a[j-1] );
            count++;
        }
    }
        
    cout << "Os novos valores do Array sao: " << '\n';
    for (int i = 0; i < arraySize; i++)
        cout << a[i] << '\n';
    
    cout << "Total de trocas: " << count << '\n';
    
    system ("pause"); 
    return 0;
}

bool trocar ( int & x, int & y )
{
    
    int temp;
    if( x > y )
    {

        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else 
        return false;
}

bool trocar ( double & x, double & y )
{
    double temp;
    if( x > y )
    {    
        temp = x;
        x = y;
        y = temp;
        return true;
    }
    else 
        return false;
}

void funcArray(int b[], int & c)
{
    srand( ( int ) time ( 0 ) );
    for ( int k = 0; k < c; k++)
        b[ k ] = 1 + (rand() % 10);
}
