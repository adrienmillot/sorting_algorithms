## Sorting algorithms & Big O

<style>
#algorithm_sort_resume tr:nth-child(1) td:nth-child(2), #algorithm_sort_resume tr:nth-child(1) td:nth-child(3), #algorithm_sort_resume tr:nth-child(1) td:nth-child(7) {background-color: rgba(0, 176, 82, 0.5); color: rgba(0, 176, 82, 1)}
#algorithm_sort_resume tr:nth-child(1) td:nth-child(4) {background-color: rgba(218, 41, 28, 0.5); color: rgba(218, 41, 28, 1)}
#algorithm_sort_resume tr:nth-child(1) td:nth-child(5), #algorithm_sort_resume tr:nth-child(1) td:nth-child(6), #algorithm_sort_resume tr:nth-child(1) td:nth-child(10) {background-color: rgba(255, 108, 47, 0.5); color: rgba(255, 108, 47, 1)}

#algorithm_sort_resume tr:nth-child(2) td:nth-child(2), #algorithm_sort_resume tr:nth-child(2) td:nth-child(3), #algorithm_sort_resume tr:nth-child(2) td:nth-child(4), #algorithm_sort_resume tr:nth-child(2) td:nth-child(7) {background-color: rgba(218, 41, 28, 0.5); color: rgba(218, 41, 28, 1)}
#algorithm_sort_resume tr:nth-child(2) td:nth-child(5) {background-color: rgba(0, 176, 82, 0.5); color: rgba(0, 176, 82, 1)}#algorithm_sort_resume tr:nth-child(3) td:nth-child(2), #algorithm_sort_resume tr:nth-child(3) td:nth-child(3), #algorithm_sort_resume tr:nth-child(3) td:nth-child(4), #algorithm_sort_resume tr:nth-child(3) td:nth-child(5), #algorithm_sort_resume tr:nth-child(3) td:nth-child(7) {background-color: rgba(218, 41, 28, 0.5); color: rgba(218, 41, 28, 1)}
#algorithm_sort_resume tr:nth-child(2) td:nth-child(10) {background-color: rgba(255, 108, 47, 0.5); color: rgba(255, 108, 47, 1)}
#algorithm_sort_resume tr:nth-child(3) td:nth-child(6) {background-color: rgba(0, 176, 82, 0.5); color: rgba(0, 176, 82, 1)}
#algorithm_sort_resume tr:nth-child(3) td:nth-child(10) {background-color: rgba(255, 108, 47, 0.5); color: rgba(255, 108, 47, 1)}
</style>

## [Big O](https://en.wikipedia.org/wiki/Big_O_notation)

> Big O notation is a mathematical notation that describes the limiting behavior of a function

## Sorting algorithm

### [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort)

![Bubble sort](https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif)

> compares adjacent elements and swaps them if they are in the wrong order

### [Insertion sort](https://en.wikipedia.org/wiki/Insertion_sort)

![Insertion sort](https://upload.wikimedia.org/wikipedia/commons/4/42/Insertion_sort.gif)

>

### [Selection sort](https://en.wikipedia.org/wiki/Selection_sort)

![Selection sort](https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif)

> The algorithm divides the input list into two parts: a sorted sublist of items which is built up from left to right at the front (left) of the list and a sublist of the remaining unsorted items that occupy the rest of the list.

### [Quick sort](https://en.wikipedia.org/wiki/Quicksort)

![Quick sort](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6a/Sorting_quicksort_anim.gif/220px-Sorting_quicksort_anim.gif)

### [Shell sort](https://en.wikipedia.org/wiki/Shellsort)

![Shell sort](https://upload.wikimedia.org/wikipedia/commons/d/d8/Sorting_shellsort_anim.gif)

### [Cocktail shaker sort](https://en.wikipedia.org/wiki/Cocktail_shaker_sort)

![Cocktail shaker sort](https://upload.wikimedia.org/wikipedia/commons/e/ef/Sorting_shaker_sort_anim.gif)

<div id="algorithm_sort_resume">

### [Counting sort](https://en.wikipedia.org/wiki/Counting_sort)

### [Merge sort](https://en.wikipedia.org/wiki/Merge_sort)

### [Heap sort](https://en.wikipedia.org/wiki/Heapsort)

![Heap sort](https://upload.wikimedia.org/wikipedia/commons/1/1b/Sorting_heapsort_anim.gif)

## Resume

|              | Bubble sort | Insertion sort | Selection sort | Quick sort | Shell sort | Cocktail shaker sort | Counting sort | Merge sort | Heap sort  |
| ------------ | ----------- | -------------- | -------------- | ---------- | ---------- | -------------------- | ------------- | ---------- | ---------- |
| Best case    | O(n)        | O(n)           | O(n^2)         | O(nlog(n)) | O(nlog(n)) | O(n)                 |               |            | O(nlog(n)) |
| Average case | O(n^2)      | O(n^2)         | O(n^2)         | O(nlog(n)) |            | O(n^2)               |               |            | O(nlog(n)) |
| Worst case   | O(n^2)      | O(n^2)         | O(n^2)         | O(n^2)     | O(n)       | O(n^2)               | O(n+k)        |            | O(nlog(n)) |

</div>

( Green: best algorithm, Red: worst algorithm )
