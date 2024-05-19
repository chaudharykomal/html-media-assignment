#include <iostream>
using namespace std;
int binary_search(int arr[], int start, int end, int key)
{
while (start <= end)
{
int mid = start + (end - start) / 2;
// Check if key is present at mid
if (arr[mid] == key)
return mid;
// If key greater, ignore right half
if (arr[mid] < key)
end = mid - 1;
// If key is smaller, ignore left half
else
start = mid + 1;
}
// if we reach here, then element was
// not present
return -1;
}
int main(void)
{
int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
int key = 2;
int size = sizeof(arr) / sizeof(arr[0]);
int result = binary_search(arr, 0, size - 1, key);
if(result == -1)
{
cout << "Key is not present in array"<<endl;
} else {
cout << "Key is present at index " << result<<endl ;
}
return 0;
}