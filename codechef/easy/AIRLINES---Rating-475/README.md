# AIRLINES - Rating 475

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T06:56:33.256Z  

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
        if (y > x) {
            cout << x << endl;
        }
        else {
            cout << y << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AIRLINES)