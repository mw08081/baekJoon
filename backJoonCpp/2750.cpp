#include <iostream>
using namespace std;

//O(n^2) : bubble, selection, insertion, quick sort
int n, arr[1000];

void Swap(int * n1, int * n2)
{
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

void BubbleSort()
{
    for (int i = n - 1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if(arr[j] > arr[j+1])
                Swap(&arr[j], &arr[j+1]);
}

void SelectionSort()
{
    int minIdx;
    for (int i = 0; i < n-1; i++)
    {
        minIdx = i;
        for (int j = i+1; j < n; j++)
            if(arr[j] < arr[minIdx])
                minIdx = j;
        Swap(&arr[i], &arr[minIdx]);
    }
}

void InsertionSort()
{
    //int keyIdx = 1;
    int i, j, tmp;
    for (i = 1; i < n; i++)     //i == keyIdx(1~n)
    {
        tmp = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > tmp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = tmp;
    }
}

void RightPviotQuickSort(int i, int j) //pIdx == pivot Index
{
    int pIdx = j+1, orgI = i;
    if(i >= j) {return;}

    while(i < j)
    {
        if(arr[i] > arr[pIdx] && arr[j] < arr[pIdx])
            Swap(&arr[i++], &arr[j--]);
        else if(arr[i] < arr[pIdx])
            i++;
        else if(arr[j] > arr[pIdx])
            j--;
    }
    Swap(&arr[i], &arr[pIdx]);

    RightPviotQuickSort(orgI, i-2);
    RightPviotQuickSort(i+1, pIdx-1);
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    //BubbleSort();
    //SelectionSort();
    //InsertionSort();
    RightPviotQuickSort(0, n-2);       //pivot == end
    //QuickSort(0, 1, n);         //pivot == start
    //QuickSort(n/2, 0, n);       //pivot == mid

    
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';
}