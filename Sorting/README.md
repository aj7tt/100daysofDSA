## Sorting 

![](http://www.equestionanswers.com/c/images/sorting-objects.png)


## Sorting algorithms


- Bubble Sort- A sorting algorithm which compares one element to its next element and if requires it swaps n take the largest end at the end.
- Selection Sort - A sorting algorithm which selects a min element  n place it at position 0  and cotinue toll array is sorted .
- Insertion Sort - A sorting algorithm which selects one element from the array and is compared to the one side of the array. Element is inserted to the proper position while shifting others.
- Quick Sort - A sorting algorithm which divides the elements into two subsets and again sorts recursively.
- Heap Sort - A sorting algorithm which is a comparison based sorting technique based on Binary Heap data structure. ,
- Merge sort - A sorting algorithm which divides the elements to subgroups and then merges back to make a sorted.
- Radix Sort - A sorting algorithm used for numbers. It sorts the elements by rank of the individual digits.



## use of Different sorting Method 💻

- Quick sort: When you don't need a stable sort and average case performance matters more than worst case performance. A quick sort is O(N log N) on average, O(N^2) in the worst case. A good implementation uses O(log N) auxiliary storage in the form of stack space for recursion.

- Merge sort: When you need a stable, O(N log N) sort, this is about your only option. The only downsides to it are that it uses O(N) auxiliary space and has a slightly larger constant than a quick sort. There are some in-place merge sorts, but AFAIK they are all either not stable or worse than O(N log N). Even the O(N log N) in place sorts have so much larger a constant than the plain old merge sort that they're more theoretical curiosities than useful algorithms.

- Heap sort: When you don't need a stable sort and you care more about worst case performance than average case performance. It's guaranteed to be O(N log N), and uses O(1) auxiliary space, meaning that you won't unexpectedly run out of heap or stack space on very large inputs.

- Introsort: This is a quick sort that switches to a heap sort after a certain recursion depth to get around quick sort's O(N^2) worst case. It's almost always better than a plain old quick sort, since you get the average case of a quick sort, with guaranteed O(N log N) performance. Probably the only reason to use a heap sort instead of this is in severely memory constrained systems where O(log N) stack space is practically significant.

- Insertion sort: When N is guaranteed to be small, including as the base case of a quick sort or merge sort. While this is O(N^2), it has a very small constant and is a stable sort.

- Bubble sort, selection sort: When you're doing something quick and dirty and for some reason you can't just use the standard library's sorting algorithm. The only advantage these have over insertion sort is being slightly easier to implement.

- Non-comparison sorts: Under some fairly limited conditions it's possible to break the O(N log N) barrier and sort in O(N). Here are some cases where that's worth a try:

- Counting sort: When you are sorting integers with a limited range.

- Radix sort: When log(N) is significantly larger than K, where K is the number of radix digits.

- Bucket sort: When you can guarantee that your input is approximately uniformly distributed.




## Real World Applications of Sorting 💻

- Merge Sort: Databases use an external merge sort to sort sets of data that are too large to be loaded entirely into memory. The driving factor in this sort is the reduction in the number of disk I/Os.
- Bubble Sort: Bubble sort is used in programming TV remote to sort channels on the basis of longer viewing time.
- Heap Sort: Heap sort is used in reading barcodes on plastic cards. The service allows to communicate with the database to constantly run checks to ensure that they were all still online and had to constantly report statistics on which readers were performing the worst, which ones got the most/least user activity, etc.
- Quick Sort: Sports scores are organised by quick sort on the basis of win-loss ratio.
- Radix Sort: eBay allows you to sort listings by the current Bid amount leveraging radix sort.
- Selection Sort: K12 education portal allows sorting list of pupils alphabetically through selection sort.
