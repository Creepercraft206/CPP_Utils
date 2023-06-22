#include "HashMap.h"
#include "ArrayList.h"
#include <iostream>

int main() {
    HashMap<int, double>* h = new HashMap<int, double>();
    ArrayList<bool>* a = new ArrayList<bool>();

    h->put(5,3.5);
    h->put(10,3.1415);
    a->add(true);
    if (a->contains(true)) {
        h->replace(5,h->getValue(3.1415));
    }
    std::cout << h->keyMapToArray();

    return 0;
}
