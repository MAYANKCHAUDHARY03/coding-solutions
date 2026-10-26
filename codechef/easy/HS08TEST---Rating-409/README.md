# HS08TEST - Rating 409

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T06:42:29.418Z  

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
        if (x > y) {
            cout << x - y << endl;
        }
        else {
            cout << y - x << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/HS08TEST)