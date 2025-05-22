#include <iostream>
using namespace std;
class bill {
	char productName[50];
	int productId;
	int productQuantity;

public:
	void setProductName(const char* p) {
		strcpy(productName, p);
	}
	const char* getProductName() {
		return productName;
	}
	void setProductId(const int i) {
		productId = i;
	}
	int getProductId() {
		return productId;
	}
	void setProductQuantity(int q) {
		productQuantity = q;
	}
	int getProductQuantity() {
		return productQuantity;
	}



};