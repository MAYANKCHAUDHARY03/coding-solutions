# CHEAPFOOD - Rating 496

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T07:32:14.092Z  

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
        if (z < x) {
            cout << "0\n";
        }
        else if (z < x + y) {
            cout << "1\n";
        }
        else {
            cout << "2\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CHEAPFOOD)