# INCRIQ - Rating 475

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T07:06:25.257Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (10 * x > y) {
            cout << y * z << endl;
        }
        else {
            cout << 10 * x * z << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/INCRIQ)