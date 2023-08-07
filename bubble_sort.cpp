#include <iostream>
using namespace std;
void swap(int *var1, int *var2)
{
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++){
        bool swapped = false;
       for (j = 0; j < n-i-1; j++) {
           if (arr[j] > arr[j+1]){
               swap(&arr[j], &arr[j+1]);
               swapped = true;
           }
       }
        if(swapped==false) break;
   }
}
void display(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << "\t";
    cout<<endl;
}
int main()
{
    int array[] = {5, 3, 1,6, 9, 8, 2, 4,7};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<"Before bubble sort: \n";
    display(array, size);
    bubbleSort(array, size);
    cout<<"After bubble sort: \n";
    display(array, size);
    return 0;
}