#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void initArray(int arr[], int size);//declaration
void display(int arr[],int size);//declaration pof display
int minimum(int arr[], int size);//declaration of minimum element
void bubbleSort(int arr[],int size);//sorting
void binarySearch(int arr[],int size,int element);//binary search
void SelectionSort(int arr[], int size);//selection sorting
int largestIndex(int arr[],int size);//largest index
void insertionSort(int arr[],int size);//insertion sorting

int main(int argc, char** argv) {
    int arr[5];int choice;
    do{
        cout<<"Press 1 for initialization \n";
        cout<<"Press 2 for display \n";
        cout<<"Press 3 for minimum value display \n";
        cout<<"Press 4 for sorting the array \n";
        cout<<"Press 5 for searching the element \n";
        cout<<"Press 6 for selection sorting the array \n";
        cout<<"Press 7 for insertion sorting the array \n";
        cout<<"Press 0 to exit \n";
        cin>>choice;

        switch(choice){
        case 1:
            initArray(arr,5);//call
            break;
        case 2:
            display(arr,5);//display call
            break;
        case 3:
            minimum(arr,5);// minimum call
            break;
        case 4:
            bubbleSort(arr,5);//sort
            for(int j=0;j<5;j++){
                cout<<arr[j]<<" ";
            }//for displaying the sorted array
            break;
        case 5:
            int element;
            cout<<"enter the element you want to search";
            cin>>element;
            binarySearch(arr,5,element);//binary search
            break;
        case 6:
            SelectionSort(arr,5);//sort
            for(int j=0;j<5;j++){
                cout<<arr[j]<<" ";
            }//for displaying the sorted array
            break;
        case 7:
            insertionSort(arr,5);//sort
            for(int j=0;j<5;j++){
                cout<<arr[j]<<" ";
            }//for displaying the sorted array
            break;
        case 0:
            exit(-1);

        }//switch statment

    }//do
    while(true);

    //initArray(arr , 5);

    return 0;
}//end of main function

//definition of function
void initArray(int arr[], int size){
    cout<<"-----INITIALIZATION-----"<<"\n";
    for(int i=0;i<=size;i++){
        cout<<"Enter the "<< i <<" element of the array: ";
        cin>>arr[i];
    }//entering values in array
}//initArray end

//definition of the display
void display(int arr[],int size){
    cout<<"-----DISPLAY-----"<<"\n";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }//displaying array elements
    cout<<endl;
}

int minimum(int arr[],int size){
    int min=arr[0];

    for(int i=1;i<=size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }	//for loop
    cout<<min;
    return min;
}//minimum element of the array


void binarySearch (int arr[],int size,int element){

    int b=0;int e=size-1;int mid=(b+e)/2;
    while(b<=e && element!=arr[mid]){
        if(arr[mid]==element){
            cout<<"found the element";
        }
        if(element<arr[mid])
            e=mid-1;
        else if(element>arr[mid])
            b=mid+1;
        mid=(b+e)/2;
    }//while
    cout<<"Element not found";
}//binary search

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag=false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag=true;
            }
        }
        if (flag==false)
            return;
    }
}

void SelectionSort(int arr[], int size){
    for(int e=size-1; e>0; e--)
    {
        int l= largestIndex(arr, e+1);
        //cout<<"\n largest : "<<l<<endl;
        int temp= arr[e];
        arr[e]= arr[l];
        arr[l]= temp;
        //arrDisplay(arr,6);
    }
    //arrDisplay(arr,6);
}//selection sorting

int largestIndex(int arr[],int size){
    int largest= arr[0];
    int j=0;

    for(int i=1; i<size; i++)
    {
        if(arr[i] > largest)
        {
            largest=arr[i];
            j=i;

        }
    }
    return j;
}//largest index

void insertionSort(int arr[],int size)
{
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]==arr[j];
            j--;
        }//while
        arr[j+1]=key;
    }//for
}//insertion sorting
