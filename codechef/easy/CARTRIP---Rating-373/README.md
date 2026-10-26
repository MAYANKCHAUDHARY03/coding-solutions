# CARTRIP - Rating 373

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-26T04:56:27.466Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a + b >= c + d) {
            cout << c + d << endl;
        }
        else {
            cout << a + b << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CARTRIP)