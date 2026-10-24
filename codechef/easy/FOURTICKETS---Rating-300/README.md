# FOURTICKETS - Rating 300

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-24T18:07:33.243Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<"NEUTRAL\n";
    }
    else if(x<y){
        cout<<"PROFIT\n";
    }
    else{
        cout<<"LOSS\n";
    }
}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FOURTICKETS)