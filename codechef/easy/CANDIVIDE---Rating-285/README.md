# CANDIVIDE - Rating 285

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T13:20:57.247Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, h;
        cin >> x >> h;
        if (h > x) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CANDIVIDE)