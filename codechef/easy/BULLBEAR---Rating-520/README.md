# BULLBEAR - Rating 520

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T17:56:39.168Z  

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
        if (x > y && y > z || x < y && y < z) {
            cout << y << endl;
        }
        else if (y < z && z < x || y > z && z > x) {
            cout << z << endl;
        }
        else if (x < z && x > y || x > z && x < y) {
            cout << x << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/BULLBEAR)