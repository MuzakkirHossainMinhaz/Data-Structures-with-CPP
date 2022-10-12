/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100]; // declare an array with 100 size

    cout << "Enter the size of the array : ";
    // this size is must be less than 100
    int n; // size of the array
    cin >> n;

    cout << "Enter the array of size " << n << ": ";
    for(int i=0; i<n; i++)
        cin >> arr[i]; // input array element

    cout << endl;
    cout << "Enter the INSERT index : ";
    int index;  // insert index
    cin >> index;

    cout << "Enter the INSERT value : ";
    int value;  // insert value
    cin >> value;

    cout << endl;
    if(index<0 || index>n)
    {
        cout << "Invalid index entered..!" << endl;
        return 0;
    }
    else
    {
        // for sorted array
        for(int i=n; i>=index; i--)
            arr[i] = arr[i-1];
        arr[index] = value;

        // for unsorted array
        /*
        arr[n] = arr[index];
        arr[index] = value;
        */
    }

    n++; // increase the size of array by 1
    cout << "Array after inserting the value : ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
