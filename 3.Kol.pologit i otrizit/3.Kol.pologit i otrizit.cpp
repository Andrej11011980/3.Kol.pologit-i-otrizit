//3.Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от - 10 до 10. Определить количество положительных, отрицательных и нулевых элементов.

#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;
const int you = 6;
const int xox = 8;
int Arr[you][xox];

int otriz = 0;
int pus = 0;
int nul = 0;

void Showelement_plus_min_nul() {
    for (int y = 0; y < you; y++)
    {
        for (int x = 0; x < xox; x++)
        {
            Arr[y][x] = rand() % 21 - 10;
            if (Arr[y][x] > 0) pus++;
            if (Arr[y][x] < 0) otriz++;
            if (Arr[y][x] == 0) nul++;
        }



    }
}
int main()
{
    srand(time(0));
    Showelement_plus_min_nul();
    cout << otriz<<"\n";
    cout << pus<<"\n";
    cout << nul<<"\n";
}
