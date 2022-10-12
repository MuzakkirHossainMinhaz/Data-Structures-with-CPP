/****************************************************************/
/*                Author : Muzakkir Hossain Minhaz              */
/*           Github : github.com/MuzakkirHossainMinhaz          */
/*      Linkedin : linkedin.com/in/muzakkir-hossain-minhaz      */
/****************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter the size of the array : ";
    int n; // size of the array
    cin >> n;

    cout << "Enter the array of size " << n << ": ";
    int arr[n]; // declare an array with n size
    for(int i=0; i<n; i++)
        cin >> arr[i]; // input array element

    // traverse the array
    // print all element of the array
    cout << "Given array : ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
