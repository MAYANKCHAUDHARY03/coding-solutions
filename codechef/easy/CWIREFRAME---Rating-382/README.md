# CWIREFRAME - Rating 382

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T05:11:20.608Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (3 * x >= 2 * y) {
            cout << 2 * y << endl;
        }
        else {
            cout << 3 * x << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CWIREFRAME)