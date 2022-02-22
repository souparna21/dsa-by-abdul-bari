#include<iostream>

using namespace std;

int main()
{
    // Declarion of an Array
    int A[5];
    
    // Putiing value in the array individually
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;

    // Print the size of A
    cout << sizeof(A) << endl;

    // Print an element at particular index
    cout << A[2] << endl;

    // Declaration with initialization
    int b[] = {2,4,3,1,5,6};
    int c[10] = {8,4,2,9,3,1};

    // Accessing and printing all the elements of an array
    int len = sizeof(c)/sizeof(int); // Finding length of the array
    for(int i=0; i<len; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    
    // Printing all the elements for each loop
    for(int x:b)
    {
        cout << x << " ";
    }
    cout << endl;

    // Creating a variable sized array
    int n;
    cout << "Enter the size of the array d: ";
    cin >> n;
    int d[n]; // Initialisation can't be done here

    // Entering values in array using loop
    int temp;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        d[i] = temp;
    }

    // Printing variable sized array
    cout << "Elements of array d is: ";         
    for(int i=0; i<n; i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;

    return 0;
}