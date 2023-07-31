#include <vector>

class PriorityQueue {
  vector<int> pq;

public:
  bool isEmpty() { return pq.size() == 0; }

  int getSize() { return pq.size(); }

  int getMin() {
    if (isEmpty()) {
      return 0;
    }

    return pq[0];
  }

  void insert(int element) {
    pq.push_back(element);

    int childIndex = pq.size() - 1;

    while (childIndex > 0) {
      int parentIndex = (childIndex - 1) / 2;

      if (pq[childIndex] < pq[parentIndex]) {
        int temp = pq[childIndex];
        pq[childIndex] = pq[parentIndex];
        pq[parentIndex] = temp;
      } else {
        break;
      }

      childIndex = parentIndex;
    }
  }

  int removeMin() {
    // Write your code here

    int ans = pq[0];

    pq[0] = pq[pq.size() - 1];

    pq.pop_back();

    int pi = 0;

    int leftchildindex = 2 * pi + 1;

    int rightchildindex = 2 * pi + 2;

    while (leftchildindex < pq.size())

    {

      int minindex = pi;

      if (pq[minindex] > pq[leftchildindex]) {
        minindex = leftchildindex;
      }
      if (pq[minindex] > pq[rightchildindex] && rightchildindex <pq.size()) {
        minindex = rightchildindex;
      }

      if (minindex == pi) {
        break;
      }
  int temp =pq[minindex];
  pq[minindex]=pq[pi];
  pq[pi]=temp;



      pi = minindex;
      leftchildindex = 2 * minindex + 1;
      rightchildindex = 2 * minindex + 2;
    }

    return ans;
  }
};