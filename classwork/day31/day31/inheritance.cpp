#include <iostream>
using namespace std;

class Nums {
protected:
    int num1, num2;
public:
    void setNums(int num1, int num2) {
        this->num1 = num1;
        this->num2 = num2;
    }
};

class Multiplier : public Nums {
private:
    int prod;
public:
    void setValues() {
        cout << "Enter num1 and num2: ";
        cin >> num1 >> num2;  // allowed because num1 and num2 are protected
    }

    int multiply() {
        prod = num1 * num2;
        return prod;
    }
};

int main() {
    Multiplier mObj;
    mObj.setValues();
    int result = mObj.multiply();
    cout << "Product is: " << result << endl;
    return 0;
}
