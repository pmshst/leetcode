def heapify(arr, size, i):
    if i>=size:
        return
    max = i;
    left = 2*i + 1
    right = 2*i +2
    if(left<size and arr[left]>=arr[max]):
         max = left
    if (right<size and arr[right]>=arr[max]):
         max = right
    if max!=i:
         arr[i], arr[max] = arr[max], arr[i]
         heapify(arr, size, max)
def build_heap(arr,size):
    last_node = size -1
    parent = (last_node-1)//2
    for i in range(parent,-1,-1):
        heapify(arr,size, i)

def heap_sort(arr, size):
    for i in range(size,1,-1):
        build_heap(arr, i)
        arr[i-1], arr[0] = arr[0], arr[i-1]
        print(arr)




a = [9,11,23,4,5,89,100]

#heapify(a,7,0)
#print(a)
#build_heap(a,7)
#print(a)
heap_sort(a,7)
print(a)






