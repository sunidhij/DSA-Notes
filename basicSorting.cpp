//Bubble Sort
//swap adjacent elements till greater element reaches the end
// two nested loops
//1st iteration 0 to n-2 ( 0 to n-1-times)
//n-1 iterations


int bubbleSort(int arr[], int n){
  for (int imes =1, times<=n-1; times++)
  {
    //swapping
    for (int j =0, j<=n-1- times; j++){
      if(a[j]>a[j+1])
      {
        swap(a[j],a[j+1]);
      }
      }
  }

//INSERTION SORT
//example - inserting cards in a sorted deck


int insertionSort(int arr[], int n){
  for (int i =1, i<=n-1; i++)
  {
    int current = arr[i];
    int prev = arr[i-1];

    while(prev>=0 && arr[prev]> current){
      arr[prev + 1] = arr[prev];
      prev--;
    }

    arr[prev +1] = current;
    
   }
  }

//SELECTION SORT
//repeatedly find the minimum element from unsorted part and put at the beginning
// swap with front part


int selectionSort(int arr[], int n){
  for (int position =0, position<=n-2; position++)
  {
    int current = arr[position];
    int minpos = poition;
   //finding min from sorted arrays
    for(int j = position ;j<n ; j++) {
      if (arr[j] <arr[minpos]){
        minpos = j;
      }
    }

    swap (arr[minpos], current);

   }
  }

//INBUILT SORTING
#include<algorithm>
int n = sizeof(arr)/sizeof(int);
sort (arr, arr+n)
//reverse order
  reverse(arr,arr+n)
//function
sort (arr, arr+n, greater<int>)

//COUNTING SORT
//data range
//count array - 0 to largest element
//update value at particular index, count++;

//largest element
int largest = -1;
for(int i =0; i<n; i++){
  largest = max(largest,a[i]);
}

//create count array
vector<int> freq(largest+1,0);

//update the freq array
for(int x: a){
  freq[x]++;
}

//put back elements from freq into original array
int j =0;
for(int i= 0; i<= largest; i++){
  while(freq[i]>0){
    a[j] =i;
    freq[i]--;
    j++;
  }
    }


