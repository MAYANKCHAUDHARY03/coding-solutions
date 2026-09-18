# NIBBLE - Rating 592

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-18T13:53:37.114Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if ((a * 2) == b) {
            cout << "ANY\n";
        }
        else if ((a * 2) > b) {
            cout << "FIRST\n";
        }
        else if ((a * 2) < b) {
            cout << "SECOND\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NIBBLE)