# lab3
Question1:
1. 輸入make指令
2. 產生編譯後的執行檔 Q1.out
3. 執行即會產生答案

Question2:

1. result:

1. n=1000

sort(): 0.000239 seconds
v1/v2 are different.
insertion_sort(): 0.012211 seconds
v1/v2 are the same.

2. n=10000

sort(): 0.003136 seconds
v1/v2 are different.
insertion_sort(): 1.08367 seconds
v1/v2 are the same.


3. n=100000

sort(): 0.037972 seconds
v1/v2 are different.
insertion_sort(): 100.747 seconds
v1/v2 are the same.

4. n=1000000

sort(): 0.383415 seconds
v1/v2 are different.
insertion_sort(): 10336.597 seconds
v1/v2 are the same.


2. explanation:
sort函式會自動選取較為快速的方法，所以相對跑的時間會比insertion sort還要短許多，
時間複雜度O(n log n) and O(n2)在數字n越大時，時間差也是以倍數增長的。


