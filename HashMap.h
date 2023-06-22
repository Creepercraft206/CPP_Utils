
template<typename Key, typename Value>
class HashMap {
private:
    Key k;
    Value v;
    Key keylist[200];
    Value valuelist[200];
public:
    HashMap();

    void put(Key key, Value value);
    Value getValue(Key key);
    Key getKey(Value value);
    void remove(Key key);
    int size();
    void replace(Key key, Value newValue);
    Key keyMapToArray();
    Value valueMapToArray();
};
