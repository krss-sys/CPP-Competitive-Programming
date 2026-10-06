/*
 * Problem: ABC467_A - Obesity
 * Idea: BMI = W / (H/100)^2 >= 25 
 *       -> Avoid float precision errors by cross-multiplying: 400 * W >= H * H
 * Input: H (cm), W (kg)
 * Output: "Yes" if BMI >= 25, else "No"
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  if (400 * W >= H * H) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}