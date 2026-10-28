# CGYM - Rating 493

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T07:23:32.846Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        if (a + b >= x || b + c >= x || a + c >= x) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CGYM)