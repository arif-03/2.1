#include <iostream>
using namespace std;

class Product
{
private:
    string code;
    double price;

public:

    void setCode(string c)
    {
        code = c;
    }

    void setPrice(double p)
    {
        price = p;
    }

    string getCode()
    {
        return code;
    }

    string getPrice()
    {
        string formattedPrice = to_string(price);
        formattedPrice += " Tk";
        return formattedPrice;
    }
};

int main()
{
    int numProducts;

    cout << "Enter the number of products: ";
    cin >> numProducts;

    // Dynamically allocate an array of Product objects
    Product *products = new Product[numProducts];

    // Input product code and price
    for (int i = 0; i < numProducts; i++)
    {
        string code;
        double price;

        cout << "Enter code for product " << i + 1 << ": ";
        cin >> code;
        products[i].setCode(code);

        cout << "Enter price for product " << i + 1 << ": ";
        cin >> price;
        products[i].setPrice(price);
    }

    // Display product information using pointers
    for (int i = 0; i < numProducts; i++)
    {
        Product *p = &products[i];
        cout << "Product " << i + 1 << " code: " << p->getCode() << endl;
        cout << "Product " << i + 1 << " price: " << p->getPrice() << endl;
    }

    // Deallocate the dynamically allocated array
    delete[] products;

    return 0;
}