#include <bits/stdc++.h>
#include "functions.h"

using namespace std;

int nonRecursiveGCD(int a, int b){

    int ans = min(a, b);
    while (ans > 0){
        if (a % ans == 0 && b % ans == 0) break;
        ans--;
    }
    return ans;

}

int recursiveGCD(int a, int b){
    if (b == 0) return a;
    return recursiveGCD(b, a % b);
}