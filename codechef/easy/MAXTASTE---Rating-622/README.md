# MAXTASTE - Rating 622

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-08T07:35:16.244Z  

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
        if (a >= b && a >= c) {
            cout << a << endl;
        }
        else if (b >= a && b >= c) {
            cout << b << endl;
        }
        else {
            cout << c << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/MAXTASTE)