# SONGS - Rating 488

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T07:09:45.168Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > (b + c) || b > (a + c) || c > (b + a)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/SONGS)