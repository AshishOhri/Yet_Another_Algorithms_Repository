void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void heapify(int arr[], int n, int i)
{
int largest=i;
int l=2*i+1;
int r=2*i+2;
if(l<n && arr[l]>arr[largest])
largest=l;
if(r<n && arr[r]>arr[largest])
largest=r;
if(largest!=i)
{
swap(arr[largest],arr[i]);
heapify(arr,n,largest);
}
}
// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n) {
for(int i=n/2-1;i>=0;i--)
{
heapify(arr,n,i);
}
}
