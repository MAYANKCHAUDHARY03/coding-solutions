# SPECIALITY - Rating 432

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T07:38:53.858Z  

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
        if (10 * x == y) {
            cout << "CLOTH\n";
        }
        else if (10 * x > y) {
            cout << "CLOTH\n";
        }
        else {
            cout << "DISPOSABLE\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SPECIALITY)