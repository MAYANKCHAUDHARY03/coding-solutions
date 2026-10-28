# NETFLIX - Rating 492

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T07:20:48.080Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int c, x, y;
        cin >> c >> x >> y;
        if (x >= c) {
            cout << "0\n";
        }
        else {
            cout << (c - x) * y << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NETFLIX)