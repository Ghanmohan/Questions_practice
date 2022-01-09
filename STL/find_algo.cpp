//same as inbuilt binary search but it gives the index of the element if it is present

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[5];
    for (int i = 0; i <= 5; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(int);

    //Search-->FIND

    int key;
    cin >> key;
    decltype(auto) it = find(arr, arr + n, key); // decltype checks for the data type declared automatically
    cout << "The index of the element " << key << " is :" << it << endl; //gives the index of the element

    int index = it - arr;

    if (index == n)
    {
        cout << key << " NOT PRESENT";
    }
    else
    {
        cout << " PRESENT AT POSITION " << index;
    }
}