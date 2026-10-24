# FINE - Rating 330

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T18:34:58.269Z  

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
        if (a > b && a > c) {
            cout << "ALICE\n";
        }
        else if (b > a && b > c) {
            cout << "BOB\n";
        }
        else {
            cout << "CHARLIE\n";
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FINE)