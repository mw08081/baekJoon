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
    if(l >= r) { return; }

    int p = l;
    int i = l + 1;
    int j = r;
    while(i <= j)
    {
        while(arr[p] >= arr[i] && i <= j) i++;
        while(arr[p] <= arr[j] && i <= j) j--;

        if(i <= j)
            Swap(&arr[i], &arr[j]);    
    }
    Swap(&arr[p], &arr[j]);

    LeftPivotQuickSort(l, j - 1);
    LeftPivotQuickSort(j + 1, r);
}

// 피벗의 위치가 변하지 않는 lPivot, rPivot quickSort는 문제되지 않지만
// 피벗의 위치가 변하는 midPivot의 경우 문제가 발생한다.. 
// 그러니 애초에 피벗인데스가 아닌 피벗값과 비교하며,, 이를 적용해도 lPivot, rPivot quickSort 는 문제되지 않으니
// 나머지도 pIdx가 아닌 pivot 으로 비교하여 통일성을 주는 것이 좋을 듯하다
void MidPivotQuickSort(int l, int r)
{
    if(l >= r) { return; }

    int i = l, j = r;
    int p = arr[(l + r) / 2];

    /* partition */
    while (i <= j) {
        while (arr[i] < arr[p])  i++;
        while (arr[j] > arr[p])  j--;

        if (i <= j) {
            Swap(&arr[i++], &arr[j--]);
        }
    }
    Print();
    cout << i << " " << j << endl;
    
    MidPivotQuickSort(l, j);
    MidPivotQuickSort(i, r);
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    //BubbleSort();
    //SelectionSort();
    //InsertionSort();
    
    //RightPivotQuickSort(0, n - 1);       //pivot == end
    LeftPivotQuickSort(0, n - 1);         //pivot == start
    //MidPivotQuickSort(0, n - 1);       //pivot == mid

    
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';
}