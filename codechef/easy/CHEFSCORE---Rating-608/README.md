# CHEFSCORE - Rating 608

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-18T14:09:50.056Z  

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
            cout << n / 4 << endl;
        }
        else {
            cout << (n / 4) + 1 << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CHEFSCORE)