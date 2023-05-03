#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
 
    int n;
    cin >> n;
    int *Vetor = new int[n + 1];

    for(int i = 0; i < n; i++)
        Vetor[i] = 0;
    
    
    for(int i = 2; i <= n; i++)
    {
        if(Vetor[i] == 0)
        {
            cout << i << " ";

            for(int j = i; j <= n; j += i)
            {
                Vetor[j] = 1;
            }
        }    
    }
    delete[] Vetor;


    return 0;
}
