# FLIPCARDS - Rating 639

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T09:34:19.206Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;;
        if (x < y) {
            cout << y - x << endl;
        }
        else if (x > y) {
            cout << x - y << endl;
        }
        else {
            cout << "0\n" << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FLIPCARDS)