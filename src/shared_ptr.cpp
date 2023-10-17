#include <iostream>
#include <memory>

class AAA {
public:
    AAA(int val) : value(val) {}
    void print() {
        std::cout << "Value: " << value << std::endl;
    }
private:
    int value;
};

int main() {
    // shared_ptrの作成と初期化
    std::shared_ptr<AAA> ptr1 = std::make_shared<AAA>(10);

    {
        // 別のshared_ptrから同じオブジェクトを共有
        std::shared_ptr<AAA> ptr2 = ptr1;

        ptr2->print(); // Value: 10

        // 参照カウントの表示
        std::cout << "Reference count: " << ptr2.use_count() << std::endl; // 2
    }

    // ptr2がスコープを抜けたので参照カウントが減少
    std::cout << "Reference count after ptr2 is out of scope: " << ptr1.use_count() << std::endl; // 1

    // ptr1がスコープを抜けると参照カウントが0になり、オブジェクトが自動的に削除される
    return 0;
}

