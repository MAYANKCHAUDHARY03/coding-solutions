# QUALIFY - Rating 593

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-18T13:57:02.990Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 4 == 0) {
            cout << "GOOD\n";
        }
        else {
            cout << "NOT GOOD\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/QUALIFY)