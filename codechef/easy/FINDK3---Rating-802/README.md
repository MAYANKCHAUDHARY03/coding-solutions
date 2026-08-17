# FINDK3 - Rating 802

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### FIND A and B

You are given three  **distinct**  positive integers $X, Y,$ and $Z$. Your task is to find integers $A$ and $B$ such that:

- $B$ is equal to one of the three given numbers;
- $A$ is equal to the product of remaining two numbers;
- $A$ is divisible by $B$.

Print $A$ and $B$ which satisfy the given conditions. If no such pair of $A$ and $B$ exists, print $-1$ instead.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The only line of each test case contains three space-separated integers $X$,$Y$, and $Z$.
### Output Format

For each test case, print two space-separated integers $A$ and $B$ which satisfy the given conditions. If no such pair of $A$ and $B$ exists, print $-1$ instead.

If there are multiple possible answers, you may print any one of them.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq X,Y,Z \leq 10^4$
- $X, Y,$ and $Z$ are distinct.
### Sample 1:
Input
Output

```
2
6 2 4 
5 7 3
```

```
12 4
-1
```

### Explanation:

 **Test case $1$:**  Consider $B = 4$ and $A = 6\cdot 2 = 12$. Here $A = 12$ is divisible by $B = 4$.

 **Test case $2$:**  No possible pair of $A$ and $B$ exists.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-17T06:28:46.544Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>> t;
while(t--){
    int x, y, z;
    cin>> x>> y>> z;
    if(((x * y) % z == 0)){
        cout<< (x * y)<< " "<< z<<endl;
    }
    else if(((y * z) % x == 0)){
        cout<< (y * z)<< " "<< x<<endl;
    }
    else if(((x * z) % y == 0)){
        cout<< (x * z)<< " "<< y<<endl;
    }
    else{
        cout<<"-1\n";
    }
}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FINDK3)