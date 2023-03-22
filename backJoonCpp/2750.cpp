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

void Print()
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
}

#pragma region otherSortingAlgo
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
#pragma endregion

void RightPivotQuickSort(int l, int r) 
{
    int pIdx = r;
    int i = l, j = r - 1;
    if(l >= r) {return;}

    while(i <= j)
    {
        while(arr[pIdx] > arr[i] && i <= j) i++;
        while(arr[pIdx] < arr[j] && i <= j) j--;

        if(i <= j)
        {
            Swap(&arr[i], &arr[j]);
        }
    }
    Swap(&arr[pIdx], &arr[i]);

    RightPivotQuickSort(l, i - 1);
    RightPivotQuickSort(i + 1, r);
}

void LeftPivotQuickSort(int l, int r)
{
    int p = l;
    int i = l + 1;
    int j = r;

    if(i > j) {return;}

    while(i < j)
    {
        while(arr[p] > arr[i] && i < r) i++;
        while(arr[p] < arr[j] && j > l) j--;

        if(i < j)
            Swap(&arr[i], &arr[j]);    
    }
    Swap(&arr[p], &arr[j]);

    LeftPivotQuickSort(l, j - 1);
    LeftPivotQuickSort(j + 1, r);
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    //BubbleSort();
    //SelectionSort();
    //InsertionSort();
    
    RightPivotQuickSort(0, n - 1);       //pivot == end
    //LeftPivotQuickSort(0, n - 1);         //pivot == start
    //QuickSort(n/2, 0, n);       //pivot == mid

    
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';
}