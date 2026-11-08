# DISCUS - Rating 613

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T07:32:09.209Z  

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
        if (n < 16) {
            if (n < 11) {
                cout << "LOWER DOUBLE\n";
            }
            else {
                cout << "LOWER SINGLE\n";
            }
        }
        else {
            if (n < 26) {
                cout << "UPPER DOUBLE\n";
            }
            else {
                cout << "UPPER SINGLE\n";
            }
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/DISCUS)