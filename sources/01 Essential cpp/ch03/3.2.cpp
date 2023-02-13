#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename IteratorType, typename elemType>
IteratorType find(IteratorType first, IteratorType last, const elemType &val) {
    for (; first != last; ++first) {
        if (val == *first)
            return first;
    }

    return last;
}

int main() {
    const int asize = 8;
    int ia[asize] = {1,1,2,3,5,8,13,21};

    vector<int> ivec(ia, ia + asize);
    list<int> ilist(ia, ia + asize);

    int *pia = find(ia, ia + asize, 13);
    if (pia != ia + asize)
        cout << pia << ": " << *pia << endl;
    
    vector<int>::iterator it = find(ivec.begin(), ivec.end(), 21);
    if (it != ivec.end())
        cout << *it << endl;
    
    list<int>::iterator lit = find(ilist.begin(), ilist.end(), 1024);
    if (lit != ilist.end())
        cout << *lit << endl;

    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
}