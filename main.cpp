#include <algorithm>
#include <climits>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#include "../utils/PrintUtils.hpp"
#include "../utils/VectorUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// https://leetcode.com/problems/check-if-it-is-a-straight-line/
// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() { // NOLINT
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();


void test1() {
  char look;
  char ignore;
  cin >> look;
  unsigned int count = 0;
  int BUFSIZE = 3;
  char msg[BUFSIZE];
  int read;
  while (true) {
    read = fread(msg, 1, BUFSIZE, stdin);
    for (int i = 0; i < read; i++) {
      // cout << i << ". " << msg[i] << endl;
      if (msg[i] == look) ++count;
    }
    if (read < BUFSIZE)
      break;
  }
  cout << count;
}

void test2() {}

void test3() {}