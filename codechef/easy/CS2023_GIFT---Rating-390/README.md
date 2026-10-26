# CS2023_GIFT - Rating 390

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T05:29:04.862Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x < 4) {
            cout << "MILD\n";
        }
        else if (x > 6) {
            cout << "HOT\n";
        }
        else {
            cout << "MEDIUM\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CS2023_GIFT)