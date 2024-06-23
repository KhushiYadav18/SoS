#include<iostream>
using namespace std;

void update(int arr[], int n) {

    cout << endl << "Inside the function" <<endl;
    
    
    arr[0] = 120;

    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    } cout<<endl;


    cout << "Going back to main function" << endl;
}

void reverse(int arr[], int n) {

    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size) {

    cout<< " printing the array " << endl;
    
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing DONE " << endl;
}

int main() {

    int number[15];

    cout << "Value at 14 index " << number[14] << endl;


\ 
    int second[3] = {5, 7, 11};

\
    cout << "Value at 2 index " << second[2] << endl;

    int third[15] = {2,7};

    int n = 15;

    int thirdSize = sizeof(third)/sizeof(int);
    cout<<" Size of Third is " << thirdSize <<endl;

    int fourth[10] = {0};

    n = 10;


   
    int fifth[10] = {1};

    n = 10;


    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<" Size of Fifth is " << fifthSize <<endl;
    

    char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
    cout << ch[3] << endl;

    cout<< " printing the array " << endl;

    for(int i =0; i<5; i++) {
        cout << ch[i] << " ";
    }
    cout<< " printing DONE " << endl;
    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];

    int arr[3] = {1,2,3};

    update(arr, 3);

    cout<< endl << "Printing in main function" << endl;
    for(int i=0; i<3; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
    
    // int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

}
