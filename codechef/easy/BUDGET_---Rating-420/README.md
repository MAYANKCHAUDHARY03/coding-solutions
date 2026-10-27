# BUDGET_ - Rating 420

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T04:37:32.612Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0;
        cin >> n;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }
        cout << sum << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BUDGET_)