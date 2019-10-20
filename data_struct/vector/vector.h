typedef int Rank;
#define DEFAULT_CAPACITY 3

template <typename T> class Vector {
protected:
    Rank _size; int _capacity; T* _elem; // 规模、容量和数据区
    void copyFrom(T const* A, Rank lo, Rank hi);
    void expand();


public:
    T & operator[] (Rank r) {
        return _elem[r];
    }

    Rank insert(Rank r, T const& e);
    int remove(Rank lo, Rank hi);
};
