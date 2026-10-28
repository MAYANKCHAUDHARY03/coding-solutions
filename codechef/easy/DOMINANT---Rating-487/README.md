# DOMINANT - Rating 487

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T07:02:53.471Z  

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
        if (1.07 * x >= y) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/DOMINANT)