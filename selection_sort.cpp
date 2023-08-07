#include<iostream>
using namespace std;
void display(int array[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << "\n"; 
} 
int main() 
{ 
    int array[] = {5, 3, 1, 9, 8, 2, 4, 7}; 
    int size = sizeof(array)/sizeof(array[0]);
    cout << "Before sorting: \n"; 
    display(array, size);
    int i, j, min_idx,temp;
    for (i = 0; i < size-1; i++)  
    {   
        min_idx = i;  
        for (j = i+1; j < size; j++){
            if (array[j] < array[min_idx])  
                min_idx = j;  
        }            
        swap(array[min_idx],array[i]);
    }
    cout << "After sorting: \n"; 
    display(array, size); 
    return 0;
}