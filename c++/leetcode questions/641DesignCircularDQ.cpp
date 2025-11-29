class MyCircularDeque {
public:
    vector<int> dq;
    int f = 0;
    int r = 0;
    int size = 0;
    int capacity = 0;

    MyCircularDeque(int k) {
        capacity = k;
        dq.resize(k, 0);
        r = k - 1;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return false;
        }
        if (f == 0)
            f = capacity - 1;
        else
            f--;
        ;

        dq[f] = value;
        size++;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }
        if (r == capacity - 1)
            r = 0;
        else
            r++;

        dq[r] = value;
        size++;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return false;
        }
        if (f == capacity - 1)
            f = 0;
        else
            f++;

        size--;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return false;
        }
        if (r == 0)
            r = capacity - 1;
        else
            r--;

        size--;
        return true;
    }

    int getFront() {
        if (isEmpty())
            return -1;
        return dq[f];
    }

    int getRear() {
        if (isEmpty())
            return -1;
        return dq[r];
    }

    bool isEmpty() { return size == 0; }

    bool isFull() { return size == capacity; }
};
