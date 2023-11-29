// S112-Lab-11-pointers-even-odd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author:       Angel Zaldivar
//goal:         even and odd array

#include <iostream>
using namespace std;

//prototypes
int* askUserForInputArray(int& aSize);
void countOccurrences(int* a, int aSize, int& evenCount, int& oddCount);
void printArray(int* arr, int arrSize, string caption);
void transferEvenValuesFromTo(int* a, int aSize, int* even);
void transferOddValuesFromTo(int* a, int aSize, int* odd);

int main()
{
    int aSize, evenCount = 0, oddCount = 0;

    int* p;
    int* aEven = new int[100];
    int* aOdd = new int[100];
    p = askUserForInputArray(aSize);

    countOccurrences(p, aSize, evenCount, oddCount);    

    transferEvenValuesFromTo(p, aSize, aEven);
    
    printArray(aEven, evenCount, "even Array");   

    transferOddValuesFromTo(p, aSize, aOdd);
    
    //printArray(p, aSize, "Origianl Array");
    printArray(aOdd, oddCount, "odd Array");
    cout << "\nAll Done.\n";
}

int* askUserForInputArray(int& aSize)
{
    cout << "How many values in Array A: ";
    cin >> aSize;
    int temp;
    int* a = new int[100];

    for (int i = 0; i < aSize; i++)
    {
        cout << "Enter item " << i << ": ";
        cin >> temp;
        *(a+i) = temp;
    }
    return a;
}

void printArray(int* arr, int arrSize, string caption)
{
    cout << "\n" << caption;
    for (int i = 0; i < arrSize; i++)
    {
        cout << " " << *(arr + i) << ", ";
    }
}

void countOccurrences(int* a, int aSize, int& evenCount, int& oddCount)
{
    
    for (int i = 0; i < aSize; i++)
    {
        if ((*(a + i) % 2) == 0)
        {
            evenCount++;
        }
        else
            oddCount++;
    }


}

void transferEvenValuesFromTo(int* a, int aSize, int* even)
{
    int temp = 0;
    for (int i = 0; i < aSize; i++)
    {
        if ((*(a + i) % 2) == 0)
        {  
            
            even[temp] = *(a + i);
            
            temp++;
        }
        
    }
    
}
void transferOddValuesFromTo(int* a, int aSize, int* odd)
{
    int temp = 0;
    for (int i = 0; i < aSize; i++)
    {
        if ((*(a + i) % 2) == 1)
        {
            
            odd[temp] = *(a + i);
            temp++;
        }
    }
}
