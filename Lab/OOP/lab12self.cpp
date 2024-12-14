#include<iostream>
using namespace std;
class Product{
    private:
    string code;
    double price;
    public:
    void setcode(string s){
        code= s;
    }
    void setprice(double p){
        price = p;
    }
    string getcode(){
        return code;
    }
    string getprice(){
        string formatted = to_string(price);
        formatted += " Tk";
        return formatted;
    }
};

int main(){
    cout<<"enter number of products: ";
    int n;
    cin>>n;
    Product *products_array = new Product[n];
    for(int i=0;i<n;i++){
        string code;
        double price;

        cout<<"Enter product "<<i+1<<"code: "<<endl;
        cin>>code;
        products_array[i].setcode(code);
        
        cout<<"Enter product "<<i+1<<"price: "<<endl;
        cin>>price;
        products_array[i].setprice(price);
    }
    for(int i=0;i<n;i++){
        Product *p = &products_array[i];
        cout<<"Product "<<i+1<<" code : "<< p->getcode()<<endl;
    }
}